#ifndef _STATUSEFFECT_H_
#define _STATUSEFFECT_H_

#include <boost/shared_ptr.hpp>

#include "Forwards.h"

namespace Core
{
namespace StatusEffect
{


class StatusEffect
{
public:
   StatusEffect( uint32_t id, Entity::ActorPtr sourceActor, Entity::ActorPtr targetActor,
                 uint32_t duration, uint32_t tickRate );

   ~StatusEffect();

   void onTick();
   void applyStatus();
   void removeStatus();

   uint32_t getId() const;
   uint32_t getDuration() const;
   uint32_t getTickRate() const;
   uint32_t getSrcActorId() const;
   uint32_t getTargetActorId() const;
   uint64_t getLastTickMs() const;
   uint64_t getStartTimeMs() const;
   uint16_t getPower() const;
   uint16_t getPower_2() const;
   void setLastTick( uint64_t lastTick );
   void setPower( uint16_t power );
   void setPower_2( uint16_t power );
   const std::string& getName() const;

private:
   uint32_t m_id;
   Entity::ActorPtr m_sourceActor;
   Entity::ActorPtr m_targetActor;
   uint32_t m_duration;
   uint64_t m_startTime;
   uint32_t m_tickRate;
   uint64_t m_lastTick;
   uint16_t m_unkpower1;
   uint16_t m_unkpower2;  //Figure out what this actually is supposed to be
   std::string m_name;

};

}
}

#endif

#include "globaldefine.h"

#include "IModule.h"

#include <vector>

#ifndef AGENT_H
#define AGENT_H

using namespace NAMESPACE;

namespace NAMESPACE
{

	/*!
		\brief объект отождествляющий собой участника движения(автомобиль)
	*/
    class Agent
    {
    public:
        Agent();
        Agent(const Agent& rhs);
        ~Agent();

        unsigned int get_id() const;
		double get_speed();//todo 
    private:
        static unsigned int _last_id;//TODO: init it in .cpp хранит последний уникальный id выданный новому экземпляру агента

		double _speed;

        unsigned int _id;
        std::vector<Agent*> _neighbors;
    };

}

#endif
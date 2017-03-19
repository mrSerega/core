#include "Position.h"

#ifndef ROAD_H
#define ROAD_H

namespace NAMESPACE

{

    class Road
    {
    public:
        Road();
        Road(const Road& rhs);
        ~Road();
		std::vector<Agent*> find_agents(Agent*, double radius);
    };

}

#endif 
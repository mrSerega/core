#include "IModule.h"

#include <vector>

#include "Agent.h"
#include "Road.h"

#ifndef CRS_H
#define CRS_H

using namespace NAMESPACE;

namespace NAMESPACE

{

    typedef std::vector<Agent*> Agents;
    typedef std::vector<Road*> Roads;

    class CRS : public IModule
    {
    public:
        CRS();
        CRS(const CRS& rhs);
        ~CRS();

        Agents get_agents() const;
        Agents* get_access();// access interface
        Agent* get_agent_access();// access interface

    private:
        Agents _agents;
        Roads _roads;

        void find_neighbors();
        void do_requests();
    };

}

#endif
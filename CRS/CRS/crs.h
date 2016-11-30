#include "IModule.h"

#include "Agent.h"
#include "Road.h"

#ifndef CRS_H
#define CRS_H

class CRS : public IModule
{
public:
    CRS();
    CRS(const CRS& rhs);
    ~CRS();
    
    void next_step();//should start in thread
private:
    std::vector<Agent*> _agents;
    std::vector<Road*> _roads;
};

#endif
#include "globaldefine.h"

#include "core.h"

using namespace NAMESPACE;

Core::Core()
{
    //pass
}

Core::Core(const Core& rhs)
{
    //pass
}

Core::~Core()
{
    //pass
}

double Core::acceleration(Agent* first, Agent* second) 
{
	return _alpha*(1 - first->get_speed()/second->get_speed() - pow(spacing_start(first,second)/spacing(first,second),_power));
}


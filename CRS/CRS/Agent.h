#include "IModule.h"

#include <vector>

#ifndef AGENT_H
#define AGENT_H

class Agent
{
public:
    Agent();
    Agent(const Agent& rhs);
    ~Agent();

    unsigned int get_id() const;
private:
    static unsigned int _last_id;//TODO: init it in .cpp

    unsigned int _id;
    std::vector<Agent*> _neighbors;
};

#endif
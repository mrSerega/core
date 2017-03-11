/*!
    \file
    \brief основной файл проекта, запускает остальные модули
    \details ...
    \author Серега
    \date 19.02.2017
    \version 1
    \bug ...
    \todo 
        * load function
*/

#include "IModule.h";

#include <vector>

typedef std::vector<IModule*>  Modules;

/*!
\brief запускает исполняемые модули
\details ...
\author Серега
\date 19.02.2017
\version 1
\bug ...
\todo do this
*/
void load(IModule* module);

/*!
\brief основная функция проекта, точка входя программы
\details ...
\author Серега
\date 19.02.2017
\version 1
\bug ...
\todo ...
*/
int main(int argc, char** argv)
{
    return 0;
}

void load(IModule* module) 
{
    return;
}
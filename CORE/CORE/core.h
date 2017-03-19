#include "IModule.h"

#include "Agent.h"

#ifndef CORE_H
#define CORE_H

namespace NAMESPACE
{
	/*!
		\brief объект для обработки текущего состояния дорожной сцены
		\details ...
		\author Серега
		\date 26.02.2017
		\version 2
		\bug ...
		\todo 
			функция next_step
			функциция spacing
			tbd константу _alpha
			tbd константу _delta
			tbd константу _power
	*/
    class Core : public IModule
    {
    public:
        Core();
        Core(const Core& rhs);
        ~Core();

		/*!
			\brief вычисляет необходимое ускорение
			\details вычисляет ускорение, необходимое агенту(first) для того, чтобы безопасно занять новое положение
			\author Серега
			\date 26.02.2017
			\version 1
			\bug ...
			\todo do this
		*/
        double acceleration(Agent* first, Agent* second);
		/*!
			\brife инкрементирует мдельное время
			\details ...
			\author Серега
			\date 26.02.2017
			\version 0
			\bug ...
			\todo do this
		*/
        void next_step();//increment the time todo
	private:
		/*!
			\brief участвует в формуле вычисления ускорения
		*/
		static double _alpha;//tbd 
		/*!
			\brief участвует в формуле вычисления ускорения
		*/
		static double _delta;//tbd
		/*!
			\brief участвует в формуле вычисления ускорения, степень частного расстояний
		*/
		static double _power;//tbd

		/*!
			\brief вычисляет расстояние между 2-мя агентами
			\details ...
			\author Серега
			\date 26.02.2017
			\version 0
			\bug ...
			\todo do this
		*/
		double spacing(Agent* first, Agent* second);//вычисляет растояние между агентами todo
		/*!
			\brief tbd
			\details ...
			\author Серега
			\date 26.02.2017
			\version 0
			\bug ...
			\todo do this
		*/
		double spacing_start(Agent* first, Agent* second);//tbd
    };

}

#endif
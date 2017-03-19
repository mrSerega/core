#include "globaldefine.h"

#ifndef POSITION_H
#define POSITION_H

namespace NAMESPACE
{
	class Position
	{
	public:
		Position();
		Position(const Position& rhs);
		~Position();
		double get_x();
		double get_y();
	private:
		double x;
		double y;
	};
}

#endif
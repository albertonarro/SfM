#ifndef POINT_H
#define POINT_H

#include<string>
#include "Color.h"
using namespace std;

//Class Point represents points in the Cartesian coordinate

class Point
{
	public:
		Point();								// Default constructor
		~Point();								// Destructor
		Point(int, int, int);					// Conversion Constructor

		int getCoordX();
		int getCoordY();
		void setCoordX(int);
		void setCoordY(int);
		void setCoord(int, int);
		Color getColor();
		void setColor(Color);
		void printCoord();

	private:
		int x_coord, y_coord;	// Coordinates of the point
		Color coordColor;		// Color in RGB of the point
			
};

#endif
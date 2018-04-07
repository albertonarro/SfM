#ifndef POINT3D_H
#define POINT3D_H

#include<string>
#include "Point.h"
using namespace std;


//Class Point represents points in the Cartesian coordinate

class Point3D : public Point
{
	public:
		Point3D();						        // Default constructor
		Point3D(int, int, int, int);			// Conversion Constructor
		
		void setCoord(int, int, int);
		int getCoordZ();
		void setCoordZ(int);
		void printCoord();

	private:
		int z_coord;           // Coordinates of the point
};


#endif
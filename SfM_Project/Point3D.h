#ifndef POINT3D_H
#define POINT3D_H

#include<string>
#include "Point.h"
using namespace std;


//Class Point represents points in the Cartesian coordinate

class Point3D : public Point
{
	public:
		Point3D();                         // Default constructor
		Point3D(int, int, int);				// Conversion Constructor
		
		void set_coord(int, int, int);
		int get_coordZ();
		void set_coordZ(int);
		void print_coord();

	private:
		double z_coord;           // Coordinates of the point
};


#endif
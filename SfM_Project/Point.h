#ifndef POINT_H
#define POINT_H

#include<string>
using namespace std;

//Class Point represents points in the Cartesian coordinate

class Point
{
	public:
		Point();								// Default constructor
		~Point();								// Destructor
		Point(int x, int y);					// Conversion Constructor

		int get_coordX();
		int get_coordY();
		void set_coordX(int);
		void set_coordY(int);
		void set_coord(int, int);
		void print_coord();

	private:
		int x_coord, y_coord;	//coordinates of the point
			
};

#endif
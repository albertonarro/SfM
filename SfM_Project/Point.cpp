#include <iostream>
#include <string> 
#include "Point.h"
using namespace std;

Point::Point()					// Default Constructor
{    
		std::cout << "Creating Point" << endl;
		x_coord = 0;
		y_coord = 0;
}

Point::~Point()					// Destructor
{
	std::cout << "Deleting Point" << endl;
}


Point::Point(int x, int  y) {    // Conversion Constructor
		x_coord = x;
		y_coord = y;
}


// Accessor methods
void Point::set_coord(int x, int y) {
	x_coord = x;
	y_coord = y;
}
void Point::set_coordX(int x) {
	x_coord = x;
}
void Point::set_coordY(int y) {
	y_coord = y;
}
int Point::get_coordX() {
	return this->x_coord;
}
int Point::get_coordY() {
	return this->y_coord;
}
void Point::print_coord() {
	std::cout << "(" << x_coord << "," << y_coord << ")";
}
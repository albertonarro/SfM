#include <iostream>
#include <string>
#include "Point.h"
using namespace std;

Point::Point()					// Default Constructor
{    
		std::cout << "Creating Point" << endl;
		this->x_coord = 0;
		this->y_coord = 0;
}

Point::~Point()					// Destructor
{
	std::cout << "Deleting Point" << endl;
}


Point::Point(int x, int  y, int Color) {    // Conversion Constructor
	this->x_coord = x;
	this->y_coord = y;
}


// Accessor methods
void Point::setCoord(int x, int y) {
	this->x_coord = x;
	this->y_coord = y;
}
void Point::setCoordX(int x) {
	this->x_coord = x;
}
void Point::setCoordY(int y) {
	this->y_coord = y;
}
int Point::getCoordX() {
	return this->x_coord;
}
int Point::getCoordY() {
	return this->y_coord;
}
Color Point::getColor() {
	return this->coordColor;
}
void Point::setColor(Color color) {
	this->coordColor = color;
}
void Point::printCoord() {
	std::cout << "(" << this->x_coord << "," << this->y_coord << ")";
}
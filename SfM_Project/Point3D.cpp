#include <iostream>
#include <string> 
#include "Point3D.h"

using namespace std;

Point3D::Point3D()					// Default Constructor
{
	std::cout << "Creating Point 3D" << endl;
	setCoordX(0);
	setCoordY(0);
	this->z_coord = 0;
}

Point3D::Point3D(int x, int y, int z, int color) {    // Conversion Constructor
	setCoordX(x);
	setCoordY(y);
	this->z_coord = z;
}


// Accessor methods
void Point3D::setCoord(int x, int y, int z) {
	setCoordX(x);
	setCoordY(y);
	this->z_coord = z;
}
void Point3D::setCoordZ(int z) {
	this->z_coord = z;
}
int Point3D::getCoordZ() {
	return this->z_coord;
}
void Point3D::printCoord() {
	std::cout << "(" << getCoordX() << "," << getCoordY() << "," << this->z_coord << ")";
}
#include <iostream>
#include <string> 
#include "Point3D.h"

using namespace std;

Point3D::Point3D()					// Default Constructor
{
	std::cout << "Creating Point 3D" << endl;
	set_coordX(0);
	set_coordY(0);
	z_coord = 0;
}

Point3D::Point3D(int x, int y, int z) {    // Conversion Constructor
	set_coordX(x);
	set_coordY(y);
	z_coord = z;
}


// Accessor methods
void Point3D::set_coord(int x, int y, int z) {
	set_coordX(x);
	set_coordY(y);
	z_coord = z;
}
void Point3D::set_coordZ(int z) {
	z_coord = z;
}
int Point3D::get_coordZ() {
	return this->z_coord;
}
void Point3D::print_coord() {
	std::cout << "(" << get_coordX() << "," << get_coordY() << "," << z_coord << ")";
}
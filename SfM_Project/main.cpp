#include <iostream>
#include "Point.h"
#include "Point3D.h"
using namespace std;

int main()
{
	Point punto1;
	punto1.print_coord();
	punto1.set_coord(1, 2);
	punto1.print_coord();
	Point3D punto2;
	punto2.print_coord();
	punto2.set_coord(1, 2, 3);
	punto2.print_coord();
	std::cout << std::endl;
	return 0;
}
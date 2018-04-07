#include <iostream>
#include "Point.h"
#include "Point3D.h"
using namespace std;

int main()
{
	Point punto1;
	punto1.printCoord();
	punto1.setCoord(1, 2);
	punto1.printCoord();
	punto1.setColor(Color(255, 254, 253));
	punto1.getColor().printColor();
	Point3D punto2;
	punto2.printCoord();
	punto2.setCoord(1, 2, 4);
	punto2.printCoord();
	punto2.setColor(Color(253, 254, 255));
	punto2.getColor().printColor();
	std::cout << std::endl;
	return 0;
}
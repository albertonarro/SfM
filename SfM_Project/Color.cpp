#include <iostream>
#include "Color.h"
using namespace std;


Color::Color()								// Default constructor
{
	std::cout << "Creating Color" << endl;
	this->R = 255;
	this->G = 255;
	this->B = 255;
}
Color::~Color()								// Destructor
{
	std::cout << "Deleting Color" << endl;
}
Color::Color(int r, int g, int b)					// Conversion Constructor
{
	this->R = r;
	this->G = g;
	this->B = b;
}


int Color::getRed()
{
	return this->R;
}
int Color::getGreen()
{
	return this->G;
}
int Color::getBlue()
{
	return this->B;
}
void Color::setRed(int r)
{
	this->R = r;
}
void Color::setGreen(int g)
{
	this->G = g;
}
void Color::setBlue(int b)
{
	this->B = b;
}
void Color::printColor()
{
	std::cout << "(" << this->R << "," << this->G << "," << this->B << ")";
}
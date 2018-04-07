#ifndef COLOR_H
#define COLOR_H

using namespace std;

//Class Color represents colors in RGB format

class Color
{
public:
	Color();								// Default constructor
	~Color();								// Destructor
	Color(int, int, int);					// Conversion Constructor

	int getRed();
	int getGreen();
	int getBlue();
	void setRed(int);
	void setGreen(int);
	void setBlue(int);
	void printColor();

private:
	int R, G, B;	//Values for Red, Green and Blue

};

#endif
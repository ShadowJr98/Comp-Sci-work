//impplementation file for rectangle class
#include "Rectangle.h"
#include <iostream>
#include <cstdlib>
using namespace std;

void Rectangle::setWidth(double w)
{
	if (w >= 0)
		width = w;
	else
	{
		cout << "Invalid width\n";
		exit(EXIT_FAILURE);
	}
}

void Rectangle::setLength(double l)
{
	if (l >= 0)
		length = l;
	else {
		cout << "Invaled length\n";
		exit(EXIT_FAILURE);
	}
}

double Rectangle::getArea() const
{
	return width *length;
}
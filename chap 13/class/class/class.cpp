#include <iostream>
#include "Rectangle.h"
#include "Circle.h"
using namespace std;


int main()
{
	Rectangle *rectPtr = nullptr;
	rectPtr = new Rectangle;
	Rectangle box, livingRoom, kitchen, bathroom;
	Circle newcircle;


	double rectwidth, rectlength;

	cout << " This program will calculate the area of a rectangle.\n"
		<< " Enter the width: ";
	cin >> rectwidth;
	cout << " Enter the length: ";
	cin >> rectlength;

	box.setWidth(rectwidth);
	box.setLength(rectlength);
	cout << " Area = " << box.getArea() << endl;


	cout << " This program will calculate the area of a Living Room.\n"
		<< " Enter the width: ";
	cin >> rectwidth;
	cout << " Enter the length: ";
	cin >> rectlength;

	livingRoom.setWidth(rectwidth);
	livingRoom.setLength(rectlength);
	cout << " Area = " << livingRoom.getArea() << endl;


	cout << " This program will calculate the area of a Kitchen.\n"
		<< " Enter the width: ";
	cin >> rectwidth;
	cout << " Enter the length: ";
	cin >> rectlength;

	kitchen.setWidth(rectwidth);
	kitchen.setLength(rectlength);
	cout << " Area = " << kitchen.getArea() << endl;


	cout << " This program will calculate the area of a Bathroom.\n"
		<< " Enter the width: ";
	cin >> rectwidth;
	cout << " Enter the length: ";
	cin >> rectlength;

	bathroom.setWidth(rectwidth);
	bathroom.setLength(rectlength);
	cout << " Area = " << bathroom.getArea() << endl;

	newcircle.setRadius(5);
	newcircle.setPi(3.14159);
	cout << "area of circle is " << newcircle.getArea() << endl;

	system("pause");
	return 0;
}
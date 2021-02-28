#ifndef Triangleclass_H
#define Triangleclass_H
#include <iostream>
using namespace std;

class TriangleClass
{
private:
	int Base;

public:
	void setBase()
	{
		int b;
		cout << "Enter the base: ";
		cin >> b;

		while (b % 2 == 0) //even
		{
			cout << " Enter an odd value\n";
			cin >> b;
		}
		Base = b;
	}

	void makeTriangle()
	{
		int Middle, Height;
		int upper, lower;

		char *stars = new char[Base];

		for (int i = 0; i <= Base; i++)
		{
			stars[i] = ' ';
		}

		Height = ceil(Base / 2);
		Middle = Base / 2;
		upper = lower = Middle;

		for (int i = 0; i <= Middle; i++)
		{
			stars[Middle] = stars[upper] = stars[lower] = '*';
			for (int i = 0; i <= Base - 1; i++)
			{
				cout << stars[i];
			}


			cout << endl;

			upper++;
			lower--;
		}
	}
};
#endif

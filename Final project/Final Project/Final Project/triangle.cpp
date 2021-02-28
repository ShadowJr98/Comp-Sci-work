#include <iostream>
#include <string>
#include <cmath>
#include "triangle.h"

using namespace std;

	void TriangleClass::setBase(int nBase)
	{
		Base = nBase;
	}

	void TriangleClass::makeTriangle()const
	{
		int b;
		cout << "Enter the base: ";
		cin >> b;

		while (b % 2 == 0) //even
		{
			cout << " Enter an odd value\n";
			cin >> b;
		}
		
		int Middle, Height;
		int upper, lower;

		char *stars = new char[b];

		for (int i = 0; i <= b; i++)
		{
			stars[i] = ' ';
		}

		Height = ceil(b / 2);
		Middle = b / 2;
		upper = lower = Middle;

		for (int i = 0; i <= Height; i++)
		{
			stars[upper] = stars[lower] = stars[Middle] = '*';
			for (int i = 0; i <= b - 1; i++)
			{
				cout << stars[i];
			}

			cout << endl;

			upper++;
			lower--;
		}
	}


#include <iostream>

using namespace std;


int main()
{
	int c = 0;
	int f;
	cout << "Temperature Conversion Chart" << endl;
	cout << "----------------------------" << endl;
	cout << "Celsius \tFarenheit " << endl;
	cout << "----------------------------" << endl;
	while (c <= 20)
	{
		cout << "  " << c << "     |     "<< f << endl;
		c = c++;
	}

	system("PAUSE");
	return 0;
}
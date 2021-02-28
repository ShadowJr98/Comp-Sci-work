
#include <iostream>
using namespace std;
int main()
{

	int max = 0;
	int min = 20;
	double number[10];
	for (int x = 0; x < 10; x++)
	{
		cout << " Please enter 10 numbers between the number 0 and 20: ";
		cin >> number[x];
	}

	max = number[0];
	min = number[0];
	for (int y = 0; y < 10; y++)
	{
		if (number[y] > max)
			max = number[y];
		else if (number[y] < min)
			min = number[y];
		else if (number[y] < 0 || number[y] > 20)
			cout << "Please enter 10 number between the number 0 and 20 ";
	}
	cout << "The greatest number is " << max << endl;
	cout << "The smallest number is " << min << endl;
	system("pause");
	return 0;

}

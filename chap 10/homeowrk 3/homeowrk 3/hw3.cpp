#include <iostream>
#include <string>
#include <cstring>

using namespace std;

string format();

string format()
{
	string num;
	cout << " Please enter a number to be formatted into money.\n";
	cin >> num;

	int length = sizeof(num);

	length = 7;

	int comma = length - 3;

	for(int a = comma; a >= 0; a = a - 3)
	{
		num.insert(a, 1, ',');
	}

	if (num.front() == ',')
		num.erase(0, 1);

	return num;
}

int main()
{
	string dollars = format();

	cout << " The money that is now formatted is $ " << dollars;
	system ("pause");

}
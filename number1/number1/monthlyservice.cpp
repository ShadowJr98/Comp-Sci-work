#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	double minutes, total, limit;
	char package;

	cout << "Which package do you have A, B, or C? : ";
	package = cin.get();

	if (package == 'A' || package == 'B' || package == 'C'||package == 'a' || package == 'b' || package == 'c')
	{

		cout << "\nHow many minutes were used: ";
		cin >> minutes;

		if (minutes > 450 || minutes < 0)
		{
			cout << "Minutes cannot be greater than 450 or less than 0!! \n\n"
				<< "Enter minutes again: ";
			cin >> minutes;
		}

		if (package == 'A' || package == 'a')
		{
			limit = 39.99;
			if (minutes < 10)
			{
				total = limit;
			}
			else
				total = ((minutes - 10) * 2) + limit;

			cout << "The amount due is: $" << total << "\n\n";
		}

		if (package == 'B' || package == 'b')
		{
			limit = 59.99;
			if (minutes < 20)
				total = limit;
			else
				total = ((minutes - 20) * 1) + limit;

			cout << "The amount due is: $" << total << "\n\n";
		}

		if (package == 'C' || package == 'c')
		{
			limit = 69.99;
			total = limit;
			cout << "The amount due is: $" << total << "\n\n";
		}
	}
	else
		cout << "You did not enter A, B, or C!! \n\n"
		<< "Please run the program again!! \n\n";

	system("pause");

	return 0;
}
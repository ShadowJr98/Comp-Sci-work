#include <iostream>
using namespace std;

int main()
{
	int empID[7] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489 };
	int hours[7];
	double payRate[7];
	double wages[7];

	for (int i = 0; i < 7; i++)
	{
		cout << "Please enter employee number " << empID[i] << "'s pay per hour: ";
		cin >> payRate[i];
		cout << "Now enter their hours: ";
		cin >> hours[i];
	}
	for (int j = 0; j < 7; j++)
	{
		wages[j] = payRate[j] * hours[j];
	}
	for (int k = 0; k < 7; k++)
	{
		cout << "Employee number " << empID[k] << "'s gross wage is $" << wages[k] << endl;
	}
	system("pause"); 
	return 0;
}
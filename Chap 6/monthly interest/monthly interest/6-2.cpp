#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


double FutureValue (double present, double rate, int months)
{

	return present * pow((1 + rate), months);

return 0;
}

int main()
{
	double present, rate;
	int months;
	cout << "Enter the current amount of money in your savings account: ";
	cin >> present;

	while (present < 1)
	{
		cout << " \nThe amount of money must be greater than 0."
			<< " \nPlease re-enter the current amount of money in"
			<< " your account: ";
		cin >> present;
	}

	cout << "\nEnter the monthly interest as a decimal for your account: ";
	cin >> rate;

	while (rate < 0)
	{
		cout << "\nThe interest rate must be greater than 0."
			<< " \nPlease re-enter the monthly interest rate: ";
		cin >> rate;
	}

	cout << "\nEnter the number of months that the money will be left "
		<< "in the account: ";
	cin >> months;

	while (months < -1)
	{
		cout << "\nThe number of months must be greater than -1."
			<< " \nPlease re-enter the number of months the money "
			<< "will be left in the account: ";
		cin >> months;
	}

	cout << fixed << showpoint << setprecision(2);
	cout << "The future value of the account will"
		<< " be " << FutureValue << endl;

	system("pause");
	return 0;

	 
}

/*double futureValue(double value, double rate, int num_month) { return value * pow(1 + rate / 100, num_month); }

int main() 
{
	double P, i;
	int t;
	cout << "Input your present value, monthly interest rate and number of months under the \nspace:";
	cin >> P >> i >> t;
	cout << "Your future value: " << futureValue(P, i, t) << endl;
	system("pause");
	return 0;
}
*/


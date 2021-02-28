#include <iostream>
#include <fstream>
using namespace std;
bool isPrime(int num);
int main()
{
	ofstream outputFile;
	outputFile.open("Primes.txt");

	int num = 0;
	cout << "Enter a number and I'll tell you whether it is prime: ";
	cin >> num;

	if (isPrime(num) == true)
		cout << num << " is prime.";
	else
		cout << num << " is not prime.";

	system("pause");
	return 0;
}
bool isPrime(int input)
{
	if (input<1)
		return false;
	else if (input == 1 || input == 2 || input == 3)
	{
		return true;
	}
	else
	{
		for (int i = 2; i<input; i++)
		{
			if (input%i == 0)
				return false;
		}
		return true;
	}
}
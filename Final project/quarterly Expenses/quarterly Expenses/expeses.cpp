#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	ifstream InputFile;
	ofstream OutputFile;
	int numOfQuaters = 4;
	int numOfExpPerQuart = 3;
	int year;
	int numofYears = 2;
	double expenseAmt;
	double Food2016 = 0;
	double Bev2016 = 0;
	double Serv2016 = 0;
	double Food2017 = 0;
	double Bev2017 = 0;
	double Serv2017 = 0;
	string expenseName;

	InputFile.open("E:\\Comp Sci work\\Final project\\Expenses.txt");
	OutputFile.open("E:\\Comp Sci work\\Final project\\Formatted quarterly Expenses.txt");

	OutputFile << "Yearly Expenses Broken Down By Quarter:\n\n";


	for (int i = 0; i < numofYears; i++)
	{
		if (i == 0)
		{
			year = 2016;
			for (int i = 0; i < numOfQuaters; i++)
			{
				if (i == 0)
				{
					for (int j = 0; j < numOfExpPerQuart; j++)
					{
						InputFile >> expenseAmt;
						InputFile >> expenseName;

						if (j == 0)
							Food2016 += expenseAmt;
						else if (j == 1)
							Bev2016 += expenseAmt;
						else
							Serv2016 += expenseAmt;

						OutputFile << fixed << showpoint << setprecision(2);
						OutputFile << "In Quarter " << (i + 1) << " of year " << year
							<< " you spent $" << expenseAmt << ", on " << expenseName << endl;
					}
				}
				OutputFile << "#####################################################################" << endl;
				if (i == 1)
				{
					for (int j = 0; j < numOfExpPerQuart; j++)
					{
						InputFile >> expenseAmt;
						InputFile >> expenseName;

						if (j == 0)
							Food2016 += expenseAmt;
						else if (j == 1)
							Bev2016 += expenseAmt;
						else
							Serv2016 += expenseAmt;

						OutputFile << fixed << showpoint << setprecision(2);
						OutputFile << "In Quarter " << (i + 1) << " of year " << year
							<< " you spent $" << expenseAmt << ", on " << expenseName << endl;
					}
				}
				OutputFile << "#####################################################################" << endl;
				if (i == 2)
				{
					for (int j = 0; j < numOfExpPerQuart; j++)
					{
						InputFile >> expenseAmt;
						InputFile >> expenseName;

						if (j == 0)
							Food2016 += expenseAmt;
						else if (j == 1)
							Bev2016 += expenseAmt;
						else
							Serv2016 += expenseAmt;

						OutputFile << fixed << showpoint << setprecision(2);
						OutputFile << "In Quarter " << (i + 1) << " of year " << year
							<< " you spent $" << expenseAmt << ", on " << expenseName << endl;
					}
				}
				OutputFile << "#####################################################################" << endl;
				if (i == 3)
				{
					for (int j = 0; j < numOfExpPerQuart; j++)
					{
						InputFile >> expenseAmt;
						InputFile >> expenseName;

						if (j == 0)
							Food2016 += expenseAmt;
						else if (j == 1)
							Bev2016 += expenseAmt;
						else
							Serv2016 += expenseAmt;

						OutputFile << fixed << showpoint << setprecision(2);
						OutputFile << "In Quarter " << (i + 1) << " of year " << year
							<< " you spent $" << expenseAmt << ", on " << expenseName << endl;
					}
				}
				OutputFile << "#####################################################################" << endl;
			}
		}
		if(i == 1)
		{
			year = 2017;
			for (int i = 0; i < numOfQuaters; i++)
			{
				if (i == 0)
				{
					for (int j = 0; j < numOfExpPerQuart; j++)
					{
						InputFile >> expenseAmt;
						InputFile >> expenseName;

						if (j == 0)
							Food2017 += expenseAmt;
						else if (j == 1)
							Bev2017 += expenseAmt;
						else
							Serv2017 += expenseAmt;

						OutputFile << fixed << showpoint << setprecision(2);
						OutputFile << "In Quarter " << (i + 1) << " of year " << year
							<< " you spent $" << expenseAmt << ", on " << expenseName << endl;
					}
				}
				OutputFile << "#####################################################################" << endl;
				if (i == 1)
				{
					for (int j = 0; j < numOfExpPerQuart; j++)
					{
						InputFile >> expenseAmt;
						InputFile >> expenseName;

						if (j == 0)
							Food2017 += expenseAmt;
						else if (j == 1)
							Bev2017 += expenseAmt;
						else
							Serv2017 += expenseAmt;

						OutputFile << fixed << showpoint << setprecision(2);
						OutputFile << "In Quarter " << (i + 1) << " of year " << year
							<< " you spent $" << expenseAmt << ", on " << expenseName << endl;
					}
				}
				OutputFile << "#####################################################################" << endl;
				if (i == 2)
				{
					for (int j = 0; j < numOfExpPerQuart; j++)
					{
						InputFile >> expenseAmt;
						InputFile >> expenseName;

						if (j == 0)
							Food2017 += expenseAmt;
						else if (j == 1)
							Bev2017 += expenseAmt;
						else
							Serv2017 += expenseAmt;

						OutputFile << fixed << showpoint << setprecision(2);
						OutputFile << "In Quarter " << (i + 1) << " of year " << year
							<< " you spent $" << expenseAmt << ", on " << expenseName << endl;
					}
				}
				OutputFile << "#####################################################################" << endl;
				if (i == 3)
				{
					for (int j = 0; j < numOfExpPerQuart; j++)
					{
						InputFile >> expenseAmt;
						InputFile >> expenseName;

						if (j == 0)
							Food2017 += expenseAmt;
						else if (j == 1)
							Bev2017 += expenseAmt;
						else
							Serv2017 += expenseAmt;

						OutputFile << fixed << showpoint << setprecision(2);
						OutputFile << "In Quarter " << (i + 1) << " of year " << year
							<< " you spent $" << expenseAmt << ", on " << expenseName << endl;
					}
				}
				OutputFile << "#####################################################################" << endl;
			}

		}

	}

	OutputFile << "Your total expenses for food are: $" << (Food2016 + Food2017) << endl;
	OutputFile << "Your total expenses for beverages are: $" << (Bev2016 + Bev2017) << endl;
	OutputFile << "Your total expenses for services are: $" << (Serv2016 + Serv2017) << endl;

	cout << "Files have beeen written to: ";
	OutputFile.close();
	InputFile.close();
	system("pause");
	return 0;
}
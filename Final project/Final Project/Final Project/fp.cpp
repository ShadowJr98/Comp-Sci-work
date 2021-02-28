#include <iostream>
#include <string>
#include <fstream>
#include "triangle.h"
using namespace std;

void expenses();
int database();


int main()
{
	int choice;
	do
	{
		cout << " Enter a number to do a program.\n"
			<< " 1: Print a Triangle\n"
			<< " 2: Read Quarterly Expenses\n"
			<< " 3: Check Product ID\n"
			<< " 4: Quit\n";

		cin >> choice;

		if (choice == 1)
		{
			cout << "Triangle\n";
			TriangleClass triclass;
			triclass.makeTriangle();
		}
		if (choice == 2)
		{
			expenses();
		}
		if (choice == 3)
		{
			char selection;
			selection = database();

			if (selection == 'y' || selection == 'Y')
			{
				selection = database();
			}
			else if (selection == 'n' || selection == 'N')
			{
				cout << "Adios";
			}
		}
		if (choice == 4)
		{
			return 0;
		}
	} 
	while (choice != 4);
	{
		cout << "Invalid option";
	}

	system("pause");
	return 0;
}






void expenses()
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
		if (i == 1)
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
}

int database()
{
	char ans;
	const int nProducts = 5;
	const int length = 27;
	char products[nProducts][length] =
	{
		"b2534 nail polish",
		"t3546 tissues",
		"k1735 kleenix",
		"d9346 dog food",
		"g2873 Holiday card",
	};
	int quantity;
	double total = 0;
	const double nail = 1.99,
		tissues = 2.99,
		kleenix = 4.99,
		dogF = 10.99,
		card = 0.99;

	char lookup[length];
	char *strptr = nullptr;
	int index;

	cout << "\t Local Pharmacy Database\n\n";
	cout << " Enter a product to search for: ";
	cin.ignore();
	cin.getline(lookup, length);

	for (index = 0; index < nProducts; index++)
	{
		strptr = strstr(products[index], lookup);
		if (strptr != nullptr)
			break;
	}
	if (strptr != nullptr)
		cout <<" The product "<< products[index] << " was located." << endl;
	else
		cout << " No matchign product was found.\n";

	if ((strcmp(products[index], "b2534 nail polish")) == 0)
	{
		cout << " The nail polish costs $" << nail << endl;
		cout << " What quantity qould you like in your cart?";
		cin >> quantity;
		total = quantity * nail;
		cout << " The total is $" << total << endl;

	}

	else if ((strcmp(products[index], "t3546 tissues")) == 0)
	{
		cout << " The tissues costs $" << tissues << endl;
		cout << " What quantity qould you like in your cart?";
		cin >> quantity;
		total = quantity * tissues;
		cout << " The total is $" << total << endl;

	}

	else if ((strcmp(products[index], "k1735 kleenix")) == 0)
	{
		cout << " The kleenix costs $" << kleenix << endl;
		cout << " What quantity qould you like in your cart?";
		cin >> quantity;
		total = quantity * kleenix;
		cout << " The total is $" << total << endl;

	}

	else if ((strcmp(products[index], "d9346 dog food")) == 0)
	{
		cout << " The dog food costs $" << dogF << endl;
		cout << " What quantity qould you like in your cart?";
		cin >> quantity;
		total = quantity * dogF;
		cout << " The total is $" << total << endl;

	}

	else if ((strcmp(products[index], "g2873 Holiday card")) == 0)
	{
		cout << " The dog food costs $" << card << endl;
		cout << " What quantity qould you like in your cart?";
		cin >> quantity;
		total = quantity * card;
		cout << " The total is $" << total << endl;

	}
	
	cout << " Would you like to search the database again? y/n\n";

	cin >> ans;
	return ans;
	system("pause");
}
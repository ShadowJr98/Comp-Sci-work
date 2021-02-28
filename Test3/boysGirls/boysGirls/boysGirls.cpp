#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int binarySearch(ifstream, string);
const int SIZE = 700;

int main()
{
	int menuSearch;
	string name;
	bool isPopular;

	ifstream File, File1;
	File.open("D:\Comp Sci work\Test3\boysGirls\boysGirls\Boys'Names.txt");
	File1.open("D:\Comp Sci work\Test3\boysGirls\Girls'Names (2).txt");

	do
	{
		cout << " Welcome to baby name search.\n"
			<< " 1 - To search for boy's name.\n"
			<< " 2 - To search for girl's name.\n"
			<< " 3 - To search for both.\n"
			<< " 4 - To quit.\n";
		cin >> menuSearch;
		if (menuSearch == 1)
		{
			cout << "Enter a name for a boy:\n";
			cin >> name;
			File.open("D:\Comp Sci work\Test3\boysGirls\Boys'Names.txt");

		}
		else if (menuSearch == 2)
		{
			cout << " Enter a name for a girl:\n";
			cin >> name;
			File1.open("D:\Comp Sci work\Test3\boysGirls\Girls'Names (2).txt");

		}
		else if (menuSearch == 3)
		{
			cout << " Enter a name for either gender:\n";
			cin >> name;
			File.open("D:\Comp Sci work\Test3\boysGirls\Boys'Names.txt");
			File1.open("D:\Comp Sci work\Test3\boysGirls\Girls'Names (2).txt");

		}
		else if (menuSearch == 4)
		{
			break;
		}
	} while (menuSearch != 4);



	system("PAUSE");
	return 0;
}

int binarySearch(ifstream File, string input)
{
	
}

void popularNames(bool isPopular, ifstream File)
{
	if (!File)
	{
		cout << "Unable to open file Boys'Names.txt";
	}
	else
	{

	}
}
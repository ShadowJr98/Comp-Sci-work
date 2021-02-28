#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>

using namespace std;

void compare(), copy();
string firstName(), backwards();

int main()
{
	int choice;

	cout << " Please enter a number to do a function:\n"
		<< " 1 - compare\n"
		<< " 2 - copy\n"
		<< " 3 - firstname\n"
		<< " 4 - backwards\n"
		<< endl;




	cin >> choice;

	if (choice == 1)
	{
		compare();
	}
	else if (choice == 2)
	{
		 copy();
	}
	else if (choice == 3)
	{
		string firstname();
	}
	else if (choice == 4)
	{
		string backwards();
	}
	else
		cout << " Please enter one of the four numbers.";

		system("pause");
		return 0;
}

void compare()
{
	char string1[100];
	char string2[100];

	cout << " Enter first string.\n";
	cin.getline(string1, 100);
	
	cout << "\n Enter second string.\n";
		cin.getline(string2, 100);

		if (strcmp(string1, string2))
			cout << "Same!!";
		else
			cout << "Different!!";
	
}

void copy()
{
	char string1[100];
	char string2[100];
	int length;

	cout << " Enter first string.\n";
	cin.getline(string1, 100);

	length = sizeof(string1) - 1;

	strcmp(string2, string1);

	string2[length] = '\0';


	cout << string2;
}


string firstName()
{
	string name;
	char string1[100];
	char string2[100];
	int count = 0;

	cout << " Enter your fullname.";

		cin.getline(string1, 100);

		for (int i = 0; i < sizeof(string1); i++)
		{
			if (string1[i] == ' ')
				break;
			else
				count++;
		}
		
		

// next loop adds on each character.
		for (int i = 0; i < count; i++)
		{
			name += string1[i];
		}

		return string2;
}

string backwards()
{
	char string1[100];
	char string2[100];

	cout << " Enter a string.\n";
	cin.getline(string1, 100);

	int length = sizeof(string1) - 1;
	int subLength = length;

	for (int i = 0; i <= length; i++)
	{

		string2[subLength] = string1[i];
		subLength--;
	}
	return string2;
}

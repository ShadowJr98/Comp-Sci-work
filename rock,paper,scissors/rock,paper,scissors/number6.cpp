#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

void cast(int);

int flag = 0;
int main() {

	int ch, i = 0;
	char choice;
	do
	{
		srand(time(NULL));

		cout << "\nMenu:\n";
		cout << "\n1.Rock";
		cout << "\n2.Paper";
		cout << "\n3.Scissors";
		cout << "\nEnter your choice : ";
		cin >> ch;
		if (ch<1 || ch>3)
			continue;
		flag = 0;
		cast(ch);
		if (flag == 1) 
		{
			cout << "\nIts a tie!! Please play again";
			continue;
		}

		cout << "\nDo you want to play again ? (y/n)";
		cin >> choice;
		if (choice == 'n' || choice == 'N')
			i = 1;
	} while (i == 0);

	return 0;
}

void cast(int ch)
{
	int num = (rand() % 3) + 1;
	cout << "\nThe system has chosen : ";
	switch (num)
	{
	case 1: cout << "Rock!";
		if (ch == 1)
		{
			flag = 1;
			cout << "\nYour choice : Rock";
			break;
		}
		else if (ch == 2)
		{
			cout << "\nYour choice : Paper";
			cout << "\nYou Win!! \n";
			break;
		}
		else
		{
			cout << "\nYour choice : Scissors";
			cout << "\nYou Lose!! \n";
			break;
		}

	case 2: cout << "Paper!";
		if (ch == 1)
		{
			cout << "\nYour choice : Rock";
			cout << "\nYou Lose!! \n";
			break;
		}
		else if (ch == 2)
		{
			flag = 1;
			cout << "\nYour choice : Paper";
			break;
		}
		else
		{
			cout << "\nYour choice : Scissors";
			cout << "\nYou Win!! \n";
			break;
		}

	case 3: cout << "Scissors!";
		if (ch == 1)
		{
			cout << "\nYour choice : Rock";
			cout << "\nYou Win!! \n";
			break;
		}
		else if (ch == 2)
		{
			cout << "\nYour choice : Paper";
			cout << "\nYou Lose!! \n";
			break;
		}
		else
		{
			flag = 1;
			cout << "\nYour choice : Scissors";
			break;
		}

	default: break;


	}
}
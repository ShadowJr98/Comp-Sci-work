#include <iostream>


using namespace std;

bool searchlist(int[], int, int);
const int tickets = 10;

int main()
{
	int ans;

	cout << " Hey player feeling lucky?\n"
		<< " Enter your lottery ticket's 5 digit number and see if you're a winner!\n";
	cin >> ans;

	int number[tickets] = { 13579, 26791, 26792, 33445, 55555,
		62483, 77777, 79422, 85647, 93121 };
	bool results;

	results = searchlist(number, tickets, ans);
	if (results == true)
	{
		cout << "Congrats, you won!" << endl;
	}
	else
		cout << "Sorry, better luck next time!" << endl;
	system("pause"); return 0;
	
}

bool searchlist(int a[], int b, int c)
{
	bool win = false;
	for (int i = 0; i < b; i++)
	{
		if (a[i] == c)
		{
			win = true;
		}
	}
	return win;
}
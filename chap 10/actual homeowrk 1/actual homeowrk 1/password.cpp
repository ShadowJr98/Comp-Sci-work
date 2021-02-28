#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()

{

	const int SIZE = 6;

	string password;
	int length,num = 0,lower = 0, upper = 0;

	cout << " Enter a password with morem than six characters\n"
	 << " You're password requires one upperand lower case letter\n"
	<< " and at least one number\n";

	cin >> password;

	length = password.length();

	cout << length << endl;

	while (length < 6)

	{

		cout << " Enter at least six characters. \n";

		cin >> password;

		length = password.length();

	}

	cout << endl;

	for (int i = 0; i < length; i++)

	{

		if (isupper(password[i]))

			upper++;

		else if (islower(password[i]))

			lower++;

		else if (isdigit(password[i]))

			num++;

	}

	while (upper < 1 || lower < 1 || num < 1) 

	{

		cout << " You must make sure your password has at\n"
			<< " one upper and one lower case letter\n"
			<<" and at least 1 number.\n";

		cin >> password;

		for (int i = 0; i < length; i++)

		{

			if (isupper(password[i]))

				upper++;

			else if (islower(password[i]))

				lower++;

			else if (isdigit(password[i]))

				num++;

		}

	}

	cout << "Your password: " << password << "is good.\n";

	system("pause");

	return 0;

}
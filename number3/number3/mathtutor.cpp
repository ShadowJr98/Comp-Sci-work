#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double A, B, C;
	char next;
	unsigned seed = time(0);
	srand(seed);

	cout << " Try and solve for the answer." << endl;

	A = 1 + rand() % 350;
	B = 1 + rand() % 350;
	C = A + B;

	cout << "\n";
	cout << "  " << A << endl << "+ ";
	cout << B << endl << "--------- " << endl;
	cout << "Hit any key and then Enter to show the answer";
	cin >> next;
	cout << "  " << A << endl << "+ ";
	cout << B << endl << "--------- " << endl << "  " << C << endl;
	system("pause");
	return 0;
}
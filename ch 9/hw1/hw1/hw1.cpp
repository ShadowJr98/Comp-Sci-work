#include <iostream>

using namespace std;

void select (int *[], int);
void showArr(const int[], int);
void showPtr(int *[], int);


int main()
{
	const int donations = 15;
	int arrDonation[donations] = { 5, 100, 5, 25, 10, 5, 25,
		5, 5, 100, 10, 15, 10, 5, 10 };

	int *arrPtr[donations] = { nullptr, nullptr, nullptr,
		nullptr, nullptr, nullptr, nullptr, nullptr,
		nullptr, nullptr, nullptr, nullptr, nullptr,
		nullptr, nullptr };

	for (int n = 0; n < donations; n++)
		//arrPtr[n] = &donations[n];

	select(arrPtr, donations);

	cout << "The donations, sorted in ascending order are: \n";
	showArr(*arrPtr,donations);

	cout << "The donations, sorted in originalre: \n";
	showPtr(arrPtr, donations);
	
	system("pause"); return 0;

}



void select(int *a[], int b)
{
	int scan, minIndex;
	int *minElem;

	for (scan = 0; scan < (b - 1); scan++)
	{
		minIndex = scan;
		minElem = a[scan];
		for (int i = scan + 1; i < b; i++)
		{
			if (*(a[i]) < *minElem)
			{
				minElem = a[i];
				minIndex = i;
			}
		}
		a[minIndex] = a[scan];
		a[scan] = minElem;
	}
}

void showArr(const int a[], int b)
{
	for (int n = 0; n < b; n++)
		cout << a[n] << " ";
	cout << endl;
}

void showPtr(int *a[], int b)
{
	for (int n = 0; n < b; n++)
		cout << a[n] << " ";
	cout << endl;
}
#include <iostream>


using namespace std;

int* copyArray(int[], int);

int main()
{
	const int SIZE = 5;
	int something[SIZE] = {  1, 2, 3, 4, 5 };

	cout << "Array Orginal Contents:\n ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << something[i] << ", " << endl;
	}


	int* reverseArray = copyArray(something, SIZE);

	cout << " Array Reversed Contents:\n ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << reverseArray[i] << ", " << endl;
	}

	system("pause"); return 0;

}

int* copyArray(int x[], int s)
{
	int* ptr = nullptr;
	ptr = new int[s];

	for (int i = 1; i <= s; i++)
	{
		ptr[i - 1] = x[s - i];
	}
	return ptr;
}
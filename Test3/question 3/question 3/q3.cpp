#include <iostream>

using namespace std;
int* FirstFunction(int[], int);
void displayArray(int[], int);

const int SIZE = 5;

int main() 
{
	int arr[SIZE] = { 1,2,3,4,5 };

	cout << "calling first function...\n";
	displayArray(arr, SIZE);
	
	cout << "The poniter of the new array: " << FirstFunction(arr, SIZE) << endl;
	cout << "End of call.\n";
	system("pause");
	return 0;
}

int* FirstFunction(int array[], int size)
{
	int newArray[6];
	int *ptr = newArray;
	int count = 0;
	int temp;

	for (int i = 0; i < (size + 1); i++)
	{
		if (i == 0)
		{
			newArray[i] = 0;
		}
		else
		{
			temp = array[count];
			newArray[i] = temp;
			count++;
		}
	}
	displayArray(newArray, 6);
	return ptr;
}

void displayArray(int array[], int size)
{
	cout << "The new array is " << size << ":\n";
	for (int i = 0; i < size; i++)
	{
		if (i < size - 1)
			cout << array[i] << ", ";
		else
			cout << array[i];
	}
	cout << endl;
}
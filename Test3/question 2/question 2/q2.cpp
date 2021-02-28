#include <iostream>

using namespace std;

void SelectionsortArray(int[], int);
void BubblesortArray(int[], int);
void displayArray(int[], int);
const int SIZE = 8;

int main()
{
	int currentArray;

	int arr1[SIZE] = { 2,4,3,5,1,6,8,7 };
	int arr2[SIZE] = { 2,4,3,5,1,6,8,7 };
	
	cout << "Unsorted array 1" << endl;
	currentArray = 1;
	displayArray(arr1, currentArray);
	cout << endl;
	BubblesortArray(arr1, currentArray);
	cout << endl;


	cout << endl << "Unsorted array 2" << endl;
	currentArray = 2;
	displayArray(arr2, SIZE);
	cout << endl;
	SelectionsortArray(arr2, SIZE);
	

	system("PAUSE"); 
	return 0;
}

void displayArray(int array[], int current)
{
	cout << "Contents of array " << current << ":\n";
	for (int i = 0; i < SIZE; i++)
	{
		if (i < SIZE - 1)
			cout << array[i] << ", ";
		else
			cout << array[i];
	}
	cout << endl;
}

void BubblesortArray(int array[], int current)
{
	bool swap;
	int temp;
	cout << endl << "**Bubble Sort**" << endl;
	do
	{
		swap = false;
		for (int count = 0; count < (SIZE - 1); count++)
		{
			if (array[count] > array[count + 1])
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swap = true;
				displayArray(array, current);
			}
		}
	} while (swap);

	
	displayArray(array, current);
}

void SelectionsortArray(int arr[], int current)
{
	int startScan, minIndex, minValue;
	cout << endl << "**Selection Sort**" << endl;
	for (startScan = 0; startScan < (current - 1); startScan++)
	{
		minIndex = startScan;
		minValue = arr[startScan];
		for (int index = startScan + 1; index < current ; index++)
		{
			if (arr[index] < minValue)
			{
				minValue = arr[index];
				minIndex = index;
				
			}
			displayArray(arr, 2);
		}
		arr[minIndex] = arr[startScan];
		arr[startScan] = minValue;
		displayArray(arr,2);
	}
	
	
	displayArray(arr, 2);
}


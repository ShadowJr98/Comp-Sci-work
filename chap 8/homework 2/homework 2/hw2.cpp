#include <iostream>
using namespace std;

int Linear(int[], int, int);
void selectionSort(int[], int);
void showArray(int[], int);
int binarySearch(int[], int, int);
const int SIZE = 20;
int main() 
{
	int ans, lin, bin;
	int kill[SIZE] = { 18, 16, 19, 20, 5, 6, 7, 8, 1, 2, 3, 4, 9, 10, 11, 12, 13, 14, 15, 17 };
	cout << "enter a number to search for between 1 and 20: ";
	cin >> ans;
	lin = Linear(kill, SIZE, ans);
	cout << "the linear method took " << lin << " number of comparisons to find your number." << endl;
	selectionSort(kill, SIZE);
	cout << "the sorted array is :" << endl;
	showArray(kill, SIZE);
	bin = binarySearch(kill, SIZE, ans);
	cout << "The binary search method took " << bin << " number of comparisons." << endl;
	system("pause"); return 0;
}

int Linear(int a[], int b, int c)
{
	for (int i = 0; i < b; i++)
	{
		if (a[i] == c) 
		{
			return i + 1;
		}
	}
	return 20;
}

void selectionSort(int arr[], int n) 
{
	int i, j, minIndex, tmp;
	for (i = 0; i < n - 1; i++) 
	{
		minIndex = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[minIndex])
				minIndex = j;
		if (minIndex != i) {
			tmp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = tmp;
		}
	}
}

/*void selectionSort(int a[], int b)
{
	int start, minIndex, minVal;
	for (start = 0; start < (b - 1); start++)
	{
		minIndex = start;
		minVal = a[start];
		for (int i = start + 1; i < b; i++)
		{
			minVal = a[i];
			minIndex = i;
		}
		a[minIndex] = a[start];
		a[start] = minVal;
	}
}*/

void showArray(int a[], int b)
{
	for (int i = 0; i < b; i++)
		cout << a[i] << " ";
	cout << endl;
}

int binarySearch(int a[], int b, int c)
{
	bool found = false;
	int first = 0, last = b - 1, middle, position = -1;
	int count = 1;
	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		if (a[middle] == c)
		{
			found = true;
			position = middle;
			return count;
		}
		else if (a[middle] > c)
			last = middle - 1;
		else
			first = middle + 1;
		count++;
	}
	return count;
}
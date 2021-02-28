#include <iostream>
#include <string>


using namespace std;

int Lin(string[], int, string);
void selSort(string[], int);
void showArray(string[], int);
int binSearch(string[], int, string);
const int SIZE = 10;

int main()
{
	int lin, bin;
	string ans;
	
	string rappers[SIZE] = { "Nicki", "Lil Wayne", "Drake", "Lil Pump", "2Pac", "Biggie",
							"Puff Daddy", "Logic", "Lil Yachty", "Lil Uzi" };


	cout << " Enter a Rapper you like that can be searched for.\n You have Nicki, Lil Wayne, Drake, Lil Pump, 2Pac,\n"
		 << "Biggie, Puff Daddy, Logi, Lil Yachty, and Lil Uzi. ";

	cin >> ans;
	lin = Lin(rappers, SIZE, ans);
	cout << " The Linear method took " << lin << " number of comparisons to find your rapper."
		<< endl;
	selSort(rappers, SIZE);
	cout << " The sorted array of rappers is : " << endl;
	showArray(rappers, SIZE);
	bin = binSearch(rappers, SIZE, ans);
	cout << " The binary search method took " << bin << " number of comparisons." << endl;

	system("pause"); return 0;
}

int Lin(string a[], int b, string c)
{
	for (int i = 0; i < b; i++)
	{
		if (a[i] == c)
		{
			return i + 1;
		}
	}
	return -1;
}

void selSort(string a[], int size)
{
	int startScan;
	int index, minIndex;
	string minValue;
	for (startScan = 0; startScan < size - 1; startScan++)
	{
		minIndex = startScan;
		minValue = a[startScan];
		for (index = startScan + 1; index < size; index++)
		{
			if (a[index] < minValue)
			{
				minValue = a[index];
				minIndex = index;
			}
			a[minIndex] = a[startScan];
			a[startScan] = minValue;
		}
	}
}
/*void selSort(string a[], int b)
{
	int start, minI, minV;
	for (start = 0; start < (b - 1); start++)
	{
		minI = start;
		minV = a[start];
		for (int i = start + 1; i < b; i++)
			if (a[i] < minV)
			{
				minV = a[i];
				minI = i;
			}
		a[minI] = a[start];
		a[start] = minV;
	}
}*/

void showArray(string a[], int b)
{
	for (int i = 0; i < b; i++)
		cout << a[i] << " ";
	cout << endl;
}

int binSearch(string a[], int b, string c)
{
	bool seen = false;
	int first = 0, last = b - 1, middle, position = -1;
	int count = 1;
	while (!seen && first <= last)
	{
		middle = (first + last) / 2;
		if (a[middle] == c)
		{
			seen = true;
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
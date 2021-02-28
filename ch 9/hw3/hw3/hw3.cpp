#include <iostream>

using namespace std;

double median(int[], int);
void sortArray(int[], int);

int main()
{
	const int SIZE = 5;
	int stats[SIZE] = { 2 ,4, 3, 1, 5 };
	sortArray(stats, SIZE);
	double container = median(stats, SIZE);
	cout << " The median is \n " << container << endl;
	

}

double median(int a[], int b)
{
	int middle, num1, num2;
	double med;
	if (b % 2 == 0)
	{
		middle = (b / 2) - 1;
		num1 = *(a + middle);
		num2 = *(a + middle + 1);

		med = (num1 + num2) / 2.0;

	}
	else
	{
		middle = b / 2;
		med = *(a + middle);
	}
	return med;
}
void sortArray(int array[], int size)
{
	bool swap;
	int temp;
	do
	{
		swap = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (array[count] > array[count + 1])
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}

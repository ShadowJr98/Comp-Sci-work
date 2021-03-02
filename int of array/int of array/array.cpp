#include <iostream>
using namespace std;

int main()
{
	//int [10] = { 1,2,3,4,5,6,7,8,9,10 };
	int *ar;
	ar = new int [10];
	
	ar[0] = 1;

	for (int i = 0; i < 10; i++)
		 ar[i] = i + 1;
	
		


	for (int i = 0; i < 10; i++)
	{
		cout << " " << ar[i] << " " << endl;
	}

	system("pause");
	return(0);
}
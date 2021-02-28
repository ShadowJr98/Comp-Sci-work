#include <iostream>
#include <string>

using namespace std;

int main()
{
	string names[5];
	char letterG[5] = { 'A','B','C','D','F' };
	double s1[4], s2[4], s3[4], s4[4], s5[4];
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter student's name\n";
		cin >> names[i];
		for(int j = 0; j < 4; j++)
		{
			if (i == 0)
			{
				cout << "Enter the test score #" << j + 1 << endl;
				cin >> s1[j];
				while (s1[j] < 0 || s1[j]>100)
				{
					cout << " Please Enter the correct grade.\n";
					cin >> s1[j];
				}
				
			}
				
			else if (i == 1)
			{
				cout << "Enter test score #" << j + 1 << endl;
				cin >> s2[j];
				while (s2[j] < 0 || s2[j]>100)
				{
					cout << " Please Enter the correct grade.\n";
					cin >> s2[j];
				}
			}
			else if (i == 2)
			{
				cout << "Enter test score#" << j + 1 << endl;
				cin >> s3[j];
				while (s3[j] < 0 || s3[j]>100)
				{
					cout << " Please Enter the correct grade.\n";
					cin >> s3[j];
				}
			}
			else if (i == 3)
			{
				cout << "Enter test score#" << j + 1 << endl;
				cin >> s4[j];
				while (s4[j] < 0 || s4[j]>100)
				{
					cout << " Please Enter the correct grade.\n";
					cin >> s4[j];
				}
			}
			else if (i == 4)
			{
				cout << "Enter test score#" << j + 1 << endl;
				cin >> s5[j];
				while (s5[j] < 0 || s5[j]>100)
				{
					cout << " Please Enter the correct grade.\n";
					cin >> s5[j];
				}
			}
		}
	}
	double total1 = 0, total2 = 0, total3 = 0, total4 = 0, total5 = 0;
	double avg1, avg2, avg3, avg4, avg5;
	for (int x = 0; x < 4; x++)
	{
		total1 += s1[x];
	}
	avg1 = total1 / 4;

	for (int x = 0; x < 4; x++)
	{
		total2 += s2[x];
	}
	avg2 = total2 / 4;

	for (int x = 0; x < 4; x++)
	{
		total3 += s3[x];
	}
	avg3 = total3 / 4;
	
	for (int x = 0; x < 4; x++)
	{
		total4 += s4[x];
	}
	avg4 = total4 / 4;

	for (int x = 0; x < 4; x++)
	{
		total5 += s5[x];
	}
	avg5 = total5 / 4;
	double arrAvg[5] = { avg1,avg2,avg3,avg4,avg5 };
	for (int i = 0; i < 5; i++)
	{
		if (arrAvg[i] <= 100 && arrAvg[i] >90)
			cout << names[i] << " has an average of " << letterG[0] << endl;
		else if (arrAvg[i] <= 90 && arrAvg[i]>80)
			cout << "Student " << i + 1 << " has an average of " << letterG[1] << endl;
		else if (arrAvg[i] <= 80 && arrAvg[i] >70)
			cout << names[i] << " has an average of " << letterG[2] << endl;
		else if (arrAvg[i] <= 70 && arrAvg[i] > 60)
			cout << names[i] << " has an average of " << letterG[3] << endl;
		else
		{
			cout << names[i] << " has an average of " << letterG[4] << endl;
		}

	}
	
/*	for (int g = 0; g < 5; g++)
	{
		if (avg1 >= 90 && avg1 <= 100)
			letterG[g] = 'A';
		else if (avg1 >= 80 && avg1 <= 89)
			letterG[g] = 'B';
		else if (avg1 >= 70 && avg1 <= 79)
			letterG[g] = 'C';
		else if (avg1 >= 60 && avg1 <= 69)
			letterG[g] = 'D';
		else if (avg1 >= 0 && avg1 <= 59)
			letterG[g] = 'F';
	}
	*/
	system("pause");
	return 0;
}
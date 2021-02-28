#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

double final(int days, double RateperDay, double ExtServices, double meds);


double final(double ExtServices, double meds);


int main()
{
	int patient, days;
	double Intotal, Outtotal, RateperDay, ExtServices, meds;
	cout << " Was patient admitted as an in or out patient? Please enter the number 0 for an in-patient or the number 1 for an out-patient.\n";
	cin >> patient;

	while (patient != 0 && patient != 1)
	{
		cout << " Enter a valid input.";
		cin >> patient;
	}

	switch (patient)
	{

	case 0:
		cout << "Enter days spent.\n";
		cin >> days;
		cout << "Enter the hospital's daily rate.\n";
		cin >> RateperDay;
		cout << "Enter charges for medication.\n";
		cin >> meds;
		cout << "Enter charges on extended services.\n";
		cin >> ExtServices;
		Intotal = final( days,  RateperDay, ExtServices, meds);
		cout << "Total costs are " << Intotal << endl;
		break;
	

	case 1:
		
		cout << "Enter charges for medication.\n";
		cin >> meds;
		cout << "Enter charges on extended services.\n";
		cin >> ExtServices;
		Outtotal = final(ExtServices, meds);
		cout << "Total costs are " << Outtotal << endl;
		break;
	}


	system("pause");
	return 0;
	
}



double final(int days, double RateperDay, double ExtServices, double meds)
{
	return (days * RateperDay) + ExtServices + meds;
}

double final(double ExtServices, double meds)
{
	return ExtServices + meds;
}
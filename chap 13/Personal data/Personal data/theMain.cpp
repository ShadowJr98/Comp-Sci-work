#include <iostream>
#include <string>


using namespace std;


class PData
{
	private:
		string name;
		string addr;
		int age;
		string phnnum;

	public:
		void nameEnter(string n);
		string putName();
		void addressEnter(string ad);
		string putaddr();
		void ageEnter(int ag);
		int putag();
		void phoneNumberEnter(string pn);
		string putph();
		
		PData(string n, string ad, string pn, int ag)
		{
			name = n;
			addr = ad;
			age = ag;
			phnnum = pn;
		}
		
		PData()
		{
			age = 0;
			name = "";
			addr = "";
			phnnum = "";
		}
};

void PData::nameEnter(string n)
{
	name = n;
}

string PData::putName()
{
	return name;
}

void PData::addressEnter(string ad)
{
	addr = ad;
}

string PData::putaddr()
{
	return addr;
}

void PData::ageEnter(int ag)
{
	age = ag;
}

int PData::putag()
{
	return age;
}

void PData::phoneNumberEnter(string pn)
{
	phnnum = pn;
}

string PData::putph()
{
	return phnnum;
}


int main()
{
	PData myData, friendsData, familyData;
	string info;
	int infoage;

	// my data
	cout << " Enter your name:\n";
	getline(cin,info);
	
	myData.nameEnter(info);

	cout << "\n Enter your address:\n";
	getline(cin, info);

	myData.addressEnter(info);
	
	cout << "\n Enter your age:\n";
	cin >> infoage;
	
	myData.ageEnter(infoage);
	cin.ignore();
	cout << "\n Enter your phone number:\n";
	getline(cin, info);

	myData.phoneNumberEnter(info);

	
	//friends Data
	
	cout << " Enter your friend's name:\n";
	getline(cin,info);

	friendsData.nameEnter(info);

	cout << "\n Enter your friend's address:\n";
	getline(cin,info);

	friendsData.addressEnter(info);

	cout << "\n Enter your friend's age:\n";
	cin >> infoage;

	friendsData.ageEnter(infoage);
	cin.ignore();
	cout << "\n Enter your friend's phone number:\n";
	getline(cin,info);

	friendsData.phoneNumberEnter(info);

	//family data


	cout << " Enter your family's name:\n";
	getline(cin,info);

	familyData.nameEnter(info);

	cout << "\n Enter your family's address:\n";
	getline(cin,info);

	familyData.addressEnter(info);

	cout << "\n Enter your family's age:\n";
	cin >> infoage;

	familyData.ageEnter(infoage);
	cin.ignore();
	cout << "\n Enter your family's phone number:\n";
	getline(cin,info);

	familyData.phoneNumberEnter(info);


	//show the data input
	//show my data

	cout << " My name is " << myData.putName()
		<< endl;
	cout << " My adrress is " << myData.putaddr()
		<< endl;
	cout << " My age is " << myData.putag()
		<< endl;
	cout << " My phone number is " << myData.putph()
		<< endl;

	// show friends data
	cout << " Friend's name is " << friendsData.putName()
		<< endl;
	cout << " " << friendsData.putName()<< " adrress is " << friendsData.putaddr()
		<< endl;
	cout << " " << friendsData.putName() << " age is " << friendsData.putag()
		<< endl;
	cout << " " << friendsData.putName() << " phone number is " << friendsData.putph()
		<< endl;

	//show family data
	cout << " Family's name is " << familyData.putName()
		<< endl;
	cout << " " << familyData.putName() << " adrress is " << familyData.putaddr()
		<< endl;
	cout << " " << familyData.putName() << " age is " << familyData.putag()
		<< endl;
	cout << " " << familyData.putName() << " phone number is " << familyData.putph()
		<< endl;


	system("pause");
	return(0);

}



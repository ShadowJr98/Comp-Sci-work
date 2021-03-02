#include <iostream>
#include <string>
using namespace std;

/*class rectangle
{
private:
	int length;
	int width;

public:
	
	rectangle()
	{
		width = 0;
		length = 0;
	}

	rectangle(int l, int w)
	{
		width = w;
		length = l;
	}

	void setlength (int l)
	{
		length = l;
	}

	void setwidth (int w)
	{
		width = w;
	}

	int getlength() const
	{
		return length;
	}

	int getwidth() const
	{
		return width;
	}
	
	~rectangle()
	{

		cout << " The rectangle is being destroyed.";
	}
};



int main()
{
	rectangle rect1(5,10);
	//rect.setwidth(10);
	//rect.setlength(5);

	cout << rect1.getlength() << " " << rect.getwidth << endl;

	rectangle rect2

	system("pause");
	return(0);


}*/

class employee
{
private:
	string name;
	int id;
	string department, position;

public:
	employee()
	{
		name = " ";
		id = 0;
		department = " ";
		position = " ";
	}
	employee(string n, int a)
	{
		name = n;
		id = a;
	}
	employee(string n, int i, string d, string p)
	{
		name = n;
		id = i;
		department = d;
		position = p;
	}

	void setname(string n)
	{
		name = n;
	}
	void setid(int i)
	{
		id = i;
	}
	void setdepartment(string d)
	{
		department = d;
	}
	void setposition(string p)
	{
		position = p;
	}
	
	string getname() const
	{
		return name;
	}

	int getid() const
	{
		return id;
	}
	string getdepartment() const
	{
		return department;
	}
	string getposition() const
	{
		return position;
	}
	
};

int main()
{
	employee emp1("Elijah" , 1293, "mailroom", "director");

	cout << " Employee's full id is - \n" << " Name: " << emp1.getname() << endl
		<< " Id number: " << emp1.getid() << endl << " Department: " << emp1.getdepartment() << endl
		<< " Position: " << emp1.getposition() << endl;

	employee emp2("Dan", 1243);

	cout << " Employee's name: " << emp2.getname() << endl << " Employee's ID is - " <<  emp2.getid() << endl;

	system("pause");
		return(0);
}
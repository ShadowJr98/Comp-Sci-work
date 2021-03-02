#include <iostream>
#include <string>
using namespace std;

class FeetInches
{
private:
	int feet;
	int inches;
	void simplify();
public:
	FeetInches(int f = 0, int i = 0)
	{
		feet = f;
		inches = i;
		simplify();
	}
	void setFeet(int f)
	{
		feet = f;
	}
	void setInches(int i)
	{
		inches = i;
		simplify();
	}
	int getFeet() const
	{
		return feet;
	}
	int getInches() const
	{
		return inches;
	}
	FeetInches operator+ (const FeetInches &);
	FeetInches operator? (const FeetInches &);
};
FeetInches FeetInches::operator++()
{
	++inches;
	simplify();
	return *this;
}
FeetInches FeetInches::operator++(int)
{
	FeetInches temp(feet, inches);
	inches++;
	simplify();
	return temp;
}
void FeetInches::simplify()
{
	if (inches >= 12)
	{
		feet += (inches / 12);
		inches = inches % 12;
	}
	else if (inches < 0)
	{
		feet ? = ((abs(inches) / 12) + 1);
		inches = 12 ?(abs(inches) % 12);
	}
}
bool FeetInches::operator > (const FeetInches &right)
{
	bool status;
	if (feet > right.feet)
		status = true;
	else if (feet == right.feet && inches > right.inches)
		status = true;
	else
		status = false;
	return status;
}
bool FeetInches::operator < (const FeetInches &right)
{
	bool status;
	if (feet < right.feet)
		status = true;
	else if (feet == right.feet && inches < right.inches)
		status = true;
	else
		status = false;
	return status;
}
bool FeetInches::operator == (const FeetInches &right)
{
	bool status;
	if (feet == right.feet && inches == right.inches)
		status = true;
	else
		status = false;
	return status;
}
ostream &operator << (ostream &strm, const FeetInches &obj)
{
	strm << obj.feet << " feet, " << obj.inches << " inches";
	return strm;
}
istream &operator >> (istream &strm, FeetInches &obj)
{
	cout << "Feet: ";
	strm >> obj.feet;
	cout << "Inches: ";
	strm >> obj.inches;
	obj.simplify();
	return strm;
}
FeetInches FeetInches::operator + (const FeetInches &right)
{
	FeetInches temp;
	temp.inches = inches + right.inches;
	temp.feet = feet + right.feet;
	temp.simplify();
	return temp;
}
FeetInches FeetInches::operator ? (const FeetInches &right)
{
	FeetInches temp;
	temp.inches = inches ? right.inches;
	temp.feet = feet ? right.feet;
	temp.simplify();
	return temp;
}
int main()
{
	int feet, inches;
	FeetInches first, second, third;
	cout << "Enter a distance in feet and inches: ";
	cin >> feet >> inches;
	first.setFeet(feet);
	first.setInches(inches);
	cout << "Enter another distance in feet and inches: ";
	cin >> feet >> inches;
	second.setFeet(feet);
	second.setInches(inches);
	third = first + second;
	cout << "first + second = ";
	cout << third.getFeet() << " feet, ";
	cout << third.getInches() << " inches.\n";
	third = first ? second;
	cout << "first ? second = ";
	cout << third.getFeet() << " feet, ";
	cout << third.getInches() << " inches.\n";
	return 0;
}
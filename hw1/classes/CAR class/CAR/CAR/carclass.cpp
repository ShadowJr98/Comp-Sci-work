#include <iostream>
#include <string>
using namespace std;

class car
{
private:
	int yearModel;
	string make;
	int speed;

public:
	car(int ym, string m)
	{
		yearModel = ym;
		make = m;
		speed = 0;
	}
	int getyearModel()
	{
		return yearModel;
	}
	string getmake()
	{
		return make;
	}
	int getspeed()
	{
		return speed;
	}

	void accelerate()
	{
		speed += 5;
	}

	void brake()
	{
		speed -= 5;
	}
};


int main()
{
	car mustang(1996, "Ford");

	cout << " The year model of the " << mustang.getmake() << " mustang is "
		<< mustang.getyearModel() << "." << endl;

	for (int i = 0; i < 5; i++)
	{
		mustang.accelerate();
	}

	cout << " Speed is " << mustang.getspeed() << endl;

	for (int b = 0; b < 5; b++)
	{
		mustang.brake();
		cout << " Speed is " << mustang.getspeed() << endl;
	}

	system("pause");
	return(0);
}
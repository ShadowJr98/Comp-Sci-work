#ifndef Circle_H
#define Circle_H


class Circle
{

private:
	double radius;
	double pi;

public:
	void setRadius(double r)
	{
		if (r >= 0)
			radius = r;
		else
			exit(0);
	}

	void setPi(double p)
	{
		if (p >= 0)
			pi = p;
		else
			exit(0);
	}

	double getArea() const
	{
		return radius * radius * pi;
	}

};
#endif
#include <iostream>
#include <cmath>
using namespace std;

class Mortgage
{
private:
	double Payment;
	double Loan;
	double Interest;
	double Term;
	int Years;


public:
	Mortgage() {};
	Mortgage(double l, double i, int y)
	{
		Loan = l;
		Interest = i;
		Years = y;
	}

	void setLoan(double l)
	{
		Loan = l;
	}
	void setInterest(double i)
	{
		Interest = i;
	}
	void setYears(double y)
	{
		Years = y;
	}

	double getPayment()
	{
		return(Loan * (Interest / 12) * Term) / (Term - 1);
	}
	double getTerm()
	{
		return pow(1 + (Interest / 12), 12 * Years);
	}
	double getLoan()
	{
		return Loan;
	}
	double getImterest()
	{
		return Interest;
	}
	int getYears()
	{
		return Years;
	}

};




int main()
{
	Mortgage m1;
	m1.setLoan(25000.00);
	m1.setInterest(.035);
	m1.setYears(5);

	cout << m1.getPayment() << " " << m1.getTerm() << endl;

	system("pause");
	return(0);


}
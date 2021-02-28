#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Product
{
	private:
		char idNum[5];
		char pName[25];
		double price;
		int amount;

	public :
		Product();
		Product(char[], char[], double, int);
		double getPrice();
		int getAmount();
		void setProductCode(char[]);
		void setName(char[]);
		void setPrice(double);
		void setAmount(int);
		int doOrder(int);
		void print();
};

Product::Product()
{
	idNum[5] = '\0' ;
	pName[25] =  '\0';
}

Product::Product(char id[], char pn[], double pr, int am)
{
	setProductCode(id);
	setName(pn);
	setPrice(pr);
	setAmount(am);
}

double Product::getPrice()
{
	cout << " Price: " << price << endl;
	return price;
}


int Product::getAmount()
{
	cout << " Quantity: " << amount << endl;
}

void Product::setProductCode(char id[])
{
	strcpy(id, idNum);
}

void Product::setName(char pn[])
{
	strcpy(pn, pName);
}

void Product::setPrice(double newPrice)
{
	if (newPrice >= 0)
	{
		price = newPrice;
	}
	else
	{
		price = 0;
	}
}

void Product::setAmount (int newAmount)
{
	if (newAmount >= 0)
	{
		amount = newAmount;
	}
	else
	{
		amount = 0;
	}
}

int Product::doOrder(int ordera)
{
	if (ordera < 0)
	{
		cout << " Error" << endl;
		ordera = 0;
		cout << " Sent: " << ordera << endl;
	}
	else if (ordera <= amount)
	{
		ordera = amount;
		amount -= ordera;
		cout << " Sent: " << ordera << endl;
	}
	else
	{
		ordera = amount;
		ordera = 0;
		cout << " Shipped: " << ordera << endl;
	}
}

void Product::print()
{
	cout << " Product ID: " << idNum
		<< "\n Product Name: " << pName
		<< "\n Price: " << price
		<< " Quantity: " << amount
		<< endl;
}


int main()
{
	Product pr1 = Product();

	Product pr2 = Product("156423", "Toilet Paper", 2.99, 13);
	cout << " Product 1" << endl;
	pr1.print();

	Product pr3 = Product("213423", "Nail Polish", -1.99, -7);
	pr2.print();

	cout << " Product 1" << endl;

	pr1.setProductCode("132476");
	pr1.setName("Hershey Bar");
	pr1.setPrice(0.99);
	pr1.setAmount(5);
	pr1.print();

	pr2.getPrice();
	pr2.getAmount();

	pr1.print();
	pr1.doOrder(-5);
	pr1.print();

	pr1.print();
	pr1.doOrder(12);
	pr1.print();

	pr2.print();
	pr2.doOrder(2);
	pr2.print();

	pr2.print();
	pr2.doOrder(5);
	pr2.print();

	system("pause");
	return 0;
}
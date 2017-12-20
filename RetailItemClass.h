#ifndef RETAILITEM_H
#define RETAILITEM_H
#include <string>
using namespace std;

class RetailItem
{
	string description;
	int unitsOnHand;
	double price;

public:
RetailItem()
{
	description = "";
	unitsOnHand = 0;
	price = 0.0;
}
RetailItem(string d, int units, double p)
{
	description = d;
	unitsOnHand = units;
	price = p;
}

void setDescription(string d)
{
	description = d;
}
void setUnits(int units)
{
	unitsOnHand = units;
}
void setPrice(double p)
{
	price = p;
}

string getDescription() 
{
	return description;
}

int getUnits() 
{
	return unitsOnHand;
}

double getPrice()
{
	return price;
}


};

// Function prototype
void displayInfo(RetailItem);

#endif 

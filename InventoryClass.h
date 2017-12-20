#ifndef INVENTORYCLASS_H
#define INVENTORYCLASS_H
#include <cassert>
#define VAILIDATE "Sorry, no negative numbers"
#define LINE "------------------------------"

class Inventory
{
private:
    int itemNumber;
    int quantity;  
    double cost;         
    double totalCost;    

public:
    Inventory()
    {
        itemNumber = quantity = 0;
        cost = totalCost = 0.0;
    }

    Inventory( int iNum, double iCost, int iQty)
    {
        itemNumber = iNum;
        quantity = iQty;
        cost = iCost;
        setTotalCost();
    }

    void setItemNumber(int iNum){ assert(iNum >= 0); itemNumber = iNum; }
    void setQuantity(int iQty) { assert(iQty >= 0); quantity = iQty; }
    void setCost(double iCost) { assert(iCost >= 0); cost = iCost; }
    void setTotalCost(){totalCost =  cost * quantity; }

    int getItemNumber() {return itemNumber;}
    int getQuantity() { return quantity;}
    double getCost() {return cost;}
    double getTotalCost() { return totalCost; }
};

bool isNeg(int input) { return (input < 0); }
bool isNeg(double input){ return (input < 0); }

#endif
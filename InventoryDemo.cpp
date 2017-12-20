#include "InventoryClass.h"
#include <iostream>
#include <iomanip>
#include <cassert>
using namespace std;

int main()
{
    Inventory NewItem;
    char loop = 'y';
	int itemNumber;
	int quantity;
    double price;
    

    do {
        do {
            cout << "Enter item number: ";
            cin >> itemNumber;
            if (isNeg(itemNumber)) cout << VAILIDATE << endl;
        }while (isNeg(itemNumber));
        NewItem.setItemNumber(itemNumber);

        do {
            cout << "Enter item quantity: ";
            cin >> quantity;
            if (isNeg(quantity)) cout << VAILIDATE << endl;
        }while (isNeg(quantity));
        NewItem.setQuantity(quantity);

        do {
            cout << "Enter item price: ";
            cin >> price;
            if (isNeg(price)) cout << VAILIDATE << endl;
        }while (isNeg(price));
        NewItem.setCost(price);

        NewItem.setTotalCost();
        cout << LINE << endl;
        cout << " Item Number:\t" << NewItem.getItemNumber() << endl;
        cout << " Item Quantity:\t"  << NewItem.getQuantity()<< endl;
        cout << " Item Price:\t" << fixed << setprecision(2) <<  NewItem.getCost()<< endl;
        cout << " Total Cost:\t" << fixed << setprecision(2) << NewItem.getTotalCost()<< endl;
        cout << LINE << endl;

        cout << "Would you like to try another item? "<< endl << "Please enter Y to restart or any other key to quit: ";
        cin.ignore();
        cin >> loop;
    }
    while (loop == 'y' || loop == 'Y' );

    cout << "Thank you for using this program!\n";
    cin.get();

	system("pause>nul");
}
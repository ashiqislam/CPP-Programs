#include "RetailItemClass.h"
#include <iostream>
#include <string.h>


int main()
{

RetailItem Item1;
Item1.setDescription("Jacket");
Item1.setUnits(12);
Item1.setPrice(59.95);


RetailItem Item2;
Item2.setDescription("Designer Jeans");
Item2.setUnits(40);
Item2.setPrice(34.95);


RetailItem Item3;
Item3.setDescription("Shirt");
Item3.setUnits(20);
Item3.setPrice(24.95);

cout << "Item #1" << endl;
displayInfo(Item1);

cout << "Item #2" << endl;
displayInfo(Item2);

cout << "Item #3" << endl;
displayInfo(Item3);

system("pause>nul");
}

void displayInfo(RetailItem NewItems)
{
cout << "Description: " << NewItems.getDescription() << endl;
cout << "Units On Hand: " << NewItems.getUnits() << endl;
cout << "Price: " << NewItems.getPrice() << endl << endl;
}
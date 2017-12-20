#include "Employee.h"
#include <iostream>
#include <iomanip>


int main()
{

Employee Susan;
Susan.setName("Susan Meyers");
Susan.setIdNumber(47899);
Susan.setDepartment("Accounting");
Susan.setPosition("Vice President");


Employee Mark;
Mark.setName("Mark Jones");
Mark.setIdNumber(39119);
Mark.setDepartment("IT");
Mark.setPosition("Programmer");

Employee Joy;
Joy.setName("Joy Rogers");
Joy.setIdNumber(81774);
Joy.setDepartment("Manufacturing");
Joy.setPosition("Engineer");

displayEmployee(Susan);
displayEmployee(Mark);
displayEmployee(Joy);

return 0;
}

void displayEmployee(Employee e)
{
cout << "Name: " << e.getName() << endl;
cout << "ID Number: " << e.getIdNumber() << endl;
cout << "Department: " << e.getDepartment() << endl;
cout << "Position: " << e.getPosition() << endl << endl;
}
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee
{
string name;
int idNumber;
string department;
string position;
public:
Employee(string n, int id, string d, string p)
{
	name = n;
	idNumber = id;
	department = d;
	position = p;
}
Employee(string n, int id )
{
	name = n;
	idNumber = id;
	department = "";
	position = "";
}
Employee()
{
	name = "";
	idNumber = 0;
	department = "";
	position = "";
}

Employee(const Employee &obj)
{
	name = obj.name;
	idNumber = obj.idNumber;
	department = obj.department;
	position = obj.position;
}

void setName(string n)
{
	name = n;
}
void setIdNumber(int id)
{
	idNumber = id;
}
void setDepartment(string d)
{
	department = d;
}
void setPosition(string p)
{
	position = p;
}
string getName()
{
	return name;
}
int getIdNumber()
{
	return idNumber;
}
string getDepartment()
{
	return department;
}
string getPosition()
{
	return position;
}
};

// Function prototype
void displayEmployee(Employee);


#endif 

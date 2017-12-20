#include <iostream>
#include <iomanip>
#include "date.h"


using namespace std;

int main(){

	int month_input;
	int day_input;
	int year_input;

	cout << "Please enter the month number: ";
	cin >> month_input;
	while (month_input < 1 || month_input > 12)
	{
		cout << "Invalid month number. Month number must be >= 1 or  <= 12." << endl;
		cout << "Please re-enter the month number: ";
		cin >> month_input;
	}

	cout << "Please enter the day number: ";
	cin >> day_input;
	while (day_input < 1 || day_input > 31)
	{
		cout << "Invalid day number. Day number must be >= 1 or  <= 31." << endl;
		cout << "Please re-enter the day number: ";
		cin >> day_input;
	}

	cout << "Please enter the year number: ";
	cin >> year_input;


	Date myDate = Date(month_input,day_input,year_input);
		
		cout<<endl;
		myDate.print_format1(); //print format 1
		cout<<endl;
		myDate.print_alternative_formats(); //print alternative formats

system("pause>nul");
cout << endl;
return 0;
}
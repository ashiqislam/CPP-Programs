#include "date.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


Date::Date(int Month,int Day,int Year)
{
		month = Month;
		day = Day;
		year = Year;
}

void Date::print_format1()
{
	cout<<month<<'/'<<day<<'/'<<year;
}

void Date::print_alternative_formats()
{
	
	string Month; 
	
	switch(month)
	{
		case 1:
		Month="January";
		break;

		case 2:
		Month="February";
		break;

		case 3:
		Month="March";
		break;

		case 4:
		Month="April";
		break;

		case 5:
		Month="May";
		break;

		case 6:
		Month="June";
		break;

		case 7:
		Month="July";
		break;

		case 8:
		Month="August";
		break;

		case 9:
		Month="September";
		break;

		case 10:
		Month="October";
		break;

		case 11:
		Month="November";
		break;

		case 12:
		Month="December";
		break;
	}

	cout<< Month << ' ' << day << ',' << ' ' << year <<endl;
	cout << day << " " << Month << ' ' << year;
}
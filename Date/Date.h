#ifndef DATE_H
#define DATE_H

class Date
{
private:
	int month;
	int day; 
	int year;

public:
	Date();
	Date(int Month , int Day, int Year);
	void print_format1();
	void print_alternative_formats();
};
#endif 

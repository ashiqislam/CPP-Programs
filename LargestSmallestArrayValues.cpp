#include <iostream>

using namespace std;

void main()
{	
	const int VALUES = 10;
	int values[VALUES];


	for (int x= 1; x <= 10; x++)
	{
		cout << "Please enter value number " << x+1 << ": ";
		cin >> values[x];
	}

	int count;
	int highest;
	int lowest;

	highest = values[0];
	for (count =0; count < VALUES; count++)
	{
		if (values[count] > highest)
			highest = values[count];

	}

	 int count1;
	 lowest = values[0];
	 for (count1 =0; count1 < VALUES; count1++)
	{
		if (values[count1] < lowest)
			lowest = values[count1];
	}

	 cout << "The highest value entered is: " << highest << "\n";
	 cout << "The lowest value entered is: " << lowest << "\n";

}

//write a program that lets the user enter 10 values in to an array. the program should then display the largest and smallest values stored in
//array
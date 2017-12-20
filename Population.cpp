#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void UserInput(int&, double&, double&, int&);
int Calculate_Population(int, double, double);

int main()
{
	int 	Starting_Population;	//population starting size
	int 	NumOfYears;	//number of years
	int     New_Population;	//projected population 
	double Birth_Rate;	//annual birth rate
	double Death_Rate; 	//annual death rate


	// Call function UserInput
	UserInput(Starting_Population, Birth_Rate, Death_Rate, NumOfYears);

	cout << "\n  Year     Starting Population       New Population\n"
		 << "---------------------------------------------------\n";

	for (int Yr = 1; Yr <= NumOfYears; Yr++)
	{
		New_Population = Calculate_Population(Starting_Population, Birth_Rate, Death_Rate);

		cout << setw(4) << Yr << "      " << setw(10) << Starting_Population;
		cout << "             " << setw(10) << New_Population << endl;

		Starting_Population = New_Population;
	}

	return 0;
}


int Calculate_Population(int Starting_Population, double Birth_Rate, double Death_Rate)
{
	return Starting_Population * (1 + Birth_Rate) * (1 - Death_Rate);
}


void UserInput(int& Starting_Population, double& Birth_Rate, double& Death_Rate, int& NumOfYears)
{
	do
	{
		cout << "What is the starting size of the population? ";
		cin  >> Starting_Population;

		if (Starting_Population < 2)
		{
			cout << "Invalid Input, starting size can't be less than 2." << endl << endl;
		}

	} while (Starting_Population < 2);

	do
	{
		cout << "What is the annual birth rate? ";
		cin  >> Birth_Rate;

		if (Birth_Rate < 0)
		{
			cout << "Invalid Input, birth rate can't be negative." << endl << endl;
		}

	} while (Birth_Rate < 0);

	do
	{
		cout << "What is the annual death rate? ";
		cin  >> Death_Rate;

		if (Death_Rate < 0)
		{
			cout << "Invalid Input, death rate can't be negative." << endl << endl;
		}

	} while (Death_Rate < 0);

	do
	{
		cout << "How many year(s) would you like to display? ";
		cin  >> NumOfYears;

		if (NumOfYears < 1)
		{
			cout << "Invalid Input, must display atleast 1 year or more." << endl << endl;
		}

	} while (NumOfYears < 1);
}
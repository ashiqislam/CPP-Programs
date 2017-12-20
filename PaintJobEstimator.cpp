#include <iostream>
using namespace std;

double const HOURLY_LABOR_COST = 18.00; 
int const SQFT_PER_GALLON = 115;

struct PaintJob {
    int num_gallons;
    int labor_hours;
    double total_paint;
    double labor_charge(){
        return labor_hours * HOURLY_LABOR_COST;
    }
    
    double total_cost(){
        return total_paint + labor_charge(); 
    }
    

};

PaintJob Calculations(int TotalSqFeet, double PaintCost){
      PaintJob Calc;
      Calc.num_gallons = TotalSqFeet / SQFT_PER_GALLON;  
      Calc.labor_hours = Calc.num_gallons * 8;
      Calc.total_paint = Calc.num_gallons * PaintCost; 
      return Calc; 
}

int main(){
	int rooms;
    double PaintCost; 
	int TotalSqFeet= 0;
	char loop;
	
	do {
	cout <<"Enter the number of rooms you want painted: ";
	cin >> rooms; 

	for (int i=1; i <= rooms; i++)
	{
	int values;
    cout << "\nEnter the number of square feet that you want painted in room " << i << ": ";
	cin >> values;
	TotalSqFeet += values;
    }

    cout << "\nEnter the price of paint per gallon: $";
    cin >> PaintCost;
	if (PaintCost < 10)
	{
		cout << "\nInvalid Entry. Price of paint per gallon can't be less than $10.00.";
		cout << "\n\nPlease re-enter the price of paint per gallon: $";
		cin >> PaintCost;
	}


    {
    auto get = Calculations(TotalSqFeet, PaintCost); 
    cout << "\nThe number of gallons of paint required is: " << get.num_gallons << " gallons" << endl;
    cout << "The hours of labor required is: " << get.labor_hours << " hours" << endl; 
    cout << "The total cost of paint is: $" <<  get.total_paint << "." << endl;
    cout << "The total labor charges is: $" <<  get.labor_charge() << "." << endl; 
    cout << "\nThe total cost of the paint job is: $" << get.total_cost() << endl; 

	cout << "\nWould you like to restart the program?" << "\nEnter the letter y to restart or any other key to exit: ";
		cin>>loop;
		
		if (loop != 'Y' && loop != 'y')
		{
			cout << "Thank you for using this program.\n";
			system("pause>nul");
			return 0;
		}
    }
}while(loop == 'Y' || 'y');
}
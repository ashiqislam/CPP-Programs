#include <cstdlib>
#include <iostream>
#include "Temperature.h"
 
using namespace std;
 
int main()
{
    
   int temp_input;
   cout<<"Please enter a temperature: ";
   cin>>temp_input;
 
   Temperature temp(1);
   temp.setTemperature(temp_input);
 
   if(temp.isEthylFreezing())
   {
	   cout<<"Ethyl Alcohol will Freeze at this temperature.\n";
   }
 
   if(temp.isOxygenFreezing())
   {
	   cout<<"Oxygen will Freeze at this temperature.\n";
   }
 
   if(temp.isWaterFreezing())
   {
	   cout<<"Water will Freeze at this temperature.\n";
   }
 
   if(temp.isEthylBoiling())
   {
	   cout<<"Ethyl Alcohol will Boil at this temperature.\n";
   }
 
   if(temp.isOxygenBoiling())
   {
	   cout<<"Oxygen will Boil at this temperature.\n";
   }
 
   if(temp.isWaterBoiling())
   {
	   cout<<"Water will Boil at this temperature.\n";
   }
 
    system("pause>nul");
}
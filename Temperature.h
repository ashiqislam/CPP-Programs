#ifndef TEMP_H
#define TEMP_H
 
#include <iostream>
#include <cstdlib>
 
using namespace std;
 
class Temperature
{
      public:
		  Temperature(int temp);
		  bool isEthylFreezing();
		  bool isEthylBoiling();
		  bool isOxygenFreezing();
		  bool isOxygenBoiling();
		  bool isWaterFreezing();
		  bool isWaterBoiling();
		  void setTemperature(int temp);
		  int getTemperature();
                 
      private:
		  int temperature; 
};
 
#endif
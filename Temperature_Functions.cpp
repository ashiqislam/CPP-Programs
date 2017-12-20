#include <iostream>
#include <cstdlib>
#include "Temperature.h"
 
using namespace std;
 
Temperature::Temperature(int temp)
	{
		temperature = temp; 
	}
 
bool Temperature::isEthylFreezing()
	{
		if(temperature<=-173)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
 
bool Temperature::isEthylBoiling()
	{
		if(temperature>=172)
		 {
			 return true;
		 }
		 else
		 {
			 return false;
		 }
	}

bool Temperature::isOxygenFreezing()
	{
		 if(temperature<=-362)
			{
				return true;
			}
			else
			{
				return false;
			}
	}
 
 bool Temperature::isOxygenBoiling()
	 {
			if(temperature>=-306)
			{
				 return true;
			}
			else
			{
				 return false;
			}
	 }
 
bool Temperature::isWaterFreezing()
	{
			if(temperature<=32)
			{
				 return true;
			}
			else
		    {
				 return false;
			}
	}
 
bool Temperature::isWaterBoiling()
	{
			 if(temperature>=212)
			 {
				 return true;
			 }
			 else
			 {
				 return false;
			 }
	}
 
void Temperature::setTemperature(int temp)
	{
		temperature = temp;
	}
 
int Temperature::getTemperature()
	{
		return temperature;
	}
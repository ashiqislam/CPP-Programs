#include <iostream>
#include <iomanip>
using namespace std;

int C(int F);
int main ()
{
cout << setw(6) << "Fahrenheit" << setw(12) << "Celsius" << endl;

//0-20 loop
for (int i = 0; i <= 20; i++)
     {
     cout << setw(6) << i << setw(12) << C(i) <<endl;
      }
return 0;
}

//Function to calculate Celsius
int C(int F)
{
  return (int)((F - 32.0)* (5.0/9.0));
}
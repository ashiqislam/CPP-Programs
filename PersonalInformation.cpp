#include "PersonalInformationClass.h"
#include <iostream>
#include <string>
using namespace std;


int main()
	{
		PersonalInformation Myself;
		PersonalInformation Friend1;
		PersonalInformation Friend2;

		cout << "Your Information" << endl;
		Myself.AskUser();
		cout << endl;

		cout << "First Friends' Information" << endl;
		Friend1.AskUser();
		cout << endl;

		cout << "Second Friends' Information" << endl;
		Friend2.AskUser();


		cout << "\nHere is the information you entered: " << endl << endl <<
			"\nYour name is: " << Myself.getName() << 
			"\nYour address is: " << Myself.getAddress() <<
			"\nYour age is: " << Myself.getAge() <<
			"\nYour phone number is: " << Myself.getPhoneNumber() << endl <<
			"\nThe name of Friend #1 is: " << Friend1.getName() <<
			"\nThe address of Friend #1 is: " << Friend1.getAddress() <<
			"\nThe age of Friend #1 is: " << Friend1.getAge() <<
			"\nThe phone number of Friend #1 is: " << Friend1.getPhoneNumber() << endl <<
			"\nThe name of Friend #2 is: " << Friend2.getName() <<
			"\nThe address of Friend #2 is: " << Friend2.getAddress() <<
			"\nThe age of Friend #2 is: " << Friend2.getAge() <<
			"\nThe phone number of Friend #2 is: " << Friend2.getPhoneNumber() << endl;
		
	system("pause>nul");
}
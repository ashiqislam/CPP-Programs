#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;

char *capitalize(char *UserInput);

int main()
{
	const int maxsize = 1000;
	char string[maxsize];

	cout << "Please enter a string: ";
	cin.getline(string, maxsize);

	cout << "\nThe modified version of this string is: " << endl << capitalize(string);

	system("pause>nul");
	cout << endl << endl;
}

//function to capitize first letter of each sentence
char *capitalize(char *UserInput)
{
	int length = strlen(UserInput);  //gets the length of user string

	UserInput[0] = toupper(UserInput[0]);	//capitalizes the first letter

	for (int i = 0; i < length; i++) //for loop to search the string
	{

		if (UserInput[i] == '.' || UserInput[i] == '?' || UserInput[i] == '!')		//if statement to find punctuation
		{
			i++;
			i++;
			UserInput[i] = toupper(UserInput[i]);
			
			if (UserInput[i] == ' ')		//if a sentence is double spaced
			{
				i++;
				UserInput[i] = toupper(UserInput[i]);
			}
		}
	}

	return UserInput;
}
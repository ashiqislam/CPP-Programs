#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string> 

using namespace std;

int coinToss(void)
{
	int randomNumber;
	randomNumber = 1 + rand() % 2;
	return randomNumber;
}

int main()
{
	int NumberOfTosses = 0;
	int randomNumber = 0;
	string HeadsOrTails = "";

	cout << "How many times do you wish to toss the coin? ";
	cin >> NumberOfTosses;

	srand((time(0))); //seeds random number generator

	for (int i = 1; i <= NumberOfTosses; i++)
	{
		randomNumber = coinToss();
		if (randomNumber == 1)
			HeadsOrTails = "Heads";
		else 
			HeadsOrTails = "Tails";

		cout << endl;
		cout << " Toss " << i << ":  " << HeadsOrTails << endl;

	}
	return 0;
}


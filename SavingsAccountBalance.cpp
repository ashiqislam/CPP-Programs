#include<iostream>

using namespace std;

int main()
{
double annInterestRate = 0,
startbalance = 0,
numberOfMonths = 0,
deposit = 0,
withdrawal = 0,
TotalDeposits = 0,
TotalWithdrawals = 0,
TotalInterest = 0,
monInterestRate = 0,
TotalBalance = 0;
char loop;

do
{
cout<<"\nEnter the annual interest rate: ";
cin>>annInterestRate;

cout<<"\nEnter the starting balance: ";
cin>>startbalance;

cout<<"\nEnter the  number  of  months  that  have\npassed since the account was established: ";
cin>>numberOfMonths;

TotalBalance = startbalance;
//monthly interest rate
monInterestRate = annInterestRate/12;

for(int i=1; i<=numberOfMonths; ++i)
{
cout<<"\nEnter the amount deposited into the account during month "<<i << ": ";
cin>>deposit;

while(deposit<0)
{
cout<<"\nEnter a valid amount deposited into the account during month "<<i << ": ";
cin>>deposit;
}
//add deposits to total balance
TotalDeposits += deposit;
TotalBalance += deposit;


cout<<"\nEnter the amount of withdraws during the month " << i << ": ";
cin>>withdrawal;
while(withdrawal<0)
{
cout<<"\nEnter a valid amount of withdraws during the month "<< i << ": ";
cin>>withdrawal;
}
//subtract balance with every withdrawal amount
TotalWithdrawals += withdrawal;
TotalBalance -= withdrawal;

//calculate total interest and total balance
TotalInterest += (TotalBalance*monInterestRate);
TotalBalance += (TotalBalance*monInterestRate);
}
if(TotalBalance<0)
{
cout<<"\nSorry, The account has been closed due to negative balance.\n\n";
return 0;
}
//display results
cout<<"\nEnding balance: "<<TotalBalance
<<"\nTotal amount of deposit: "<<TotalDeposits
<<"\nTotal amount of withdraws: "<<TotalWithdrawals
<<"\nTotal interest earned: "<<TotalInterest<<endl;

cout << "\nWould you like to restart the program?" << "\nEnter the letter y to restart or any other key to exit: ";
		cin>>loop;
		
		if (loop != 'Y' && loop != 'y')
		{
			cout << "Thank you for using this program.\n";
			system("pause>nul");
			return 0;
		}

	}while(loop == 'Y' || 'y');

return 0;
}

//notes to self: remember to place calculations inside for loop for a program like this
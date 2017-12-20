#include<iostream>

using namespace std;

void getScore(double &);
void calcAverage(double score[5]);
int findLowest(double score[5]);
char loop;


int main()
{
double score[5];

getScore(score[0]);
getScore(score[1]);
getScore(score[2]);
getScore(score[3]);
getScore(score[4]);
calcAverage(score);

return 0;
}

void getScore(double &score)
{
cout<<"\nEnter a test score: ";
cin>>score;
while(score<0||score>100)
{
cout<<"\nInvalid Entry. Please enter a score between 0-100 (inclusive): ";
cin>>score;
}
}

int findLowest(double score[5])
{
int lowestIndex=0;
for(int i=0;i<5;i++)
{
if(score[i]<score[lowestIndex])
{
lowestIndex=i;
}
}
return lowestIndex;
}

void calcAverage(double score[5])
{
int lowest=findLowest(score);
double amount=0;
for(int i=0;i<5;i++)
{
amount+=score[i];
}

amount-=score[lowest];

cout <<"\nThe lowest test score of " << score[lowest] << " has been dropped." << endl;

double average=amount/4;

cout<<"\nThe average of the other four test scores is: "<<average<<endl;

}


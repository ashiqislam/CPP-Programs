#include "TriviaClass.h"
#include <iostream>
#include <iomanip>
#include <string>

int main()
{
	Trivia Q1;
	Trivia Q2;
	Trivia Q3;
	Trivia Q4;
	Trivia Q5;
	Trivia Q6;
	Trivia Q7;
	Trivia Q8;
	Trivia Q9;
	Trivia Q10;

	string Q1answer, Q2answer, Q3answer, Q4answer, Q5answer,
		   Q6answer, Q7answer, Q8answer, Q9answer, Q10answer;

	int P1points = 0;
	int P2points = 0;

	cout << "Welcome to the Trivia Game!" << endl;
	cout << "Player # 1"<< endl << endl;

	Q1.setQuestion("What is 30 x 5: \n");
	Q1.setPossibleAnswers("\n 1) 150 \n 2) 200 \n 3) 300 \n 4) 90");
	Q1.setCorrectAnswer("1");

	Q2.setQuestion("\nWho was America's first President? \n");
	Q2.setPossibleAnswers("\n 1) John Adams \n 2) Barack Obama \n 3) George Washington \n 4) Abraham Lincoln");
	Q2.setCorrectAnswer("3");

	Q3.setQuestion("\nWhere do objects get created in C++? \n");
	Q3.setPossibleAnswers("\n 1) Attributes \n 2) Destructor \n 3) Constructor \n 4) Class");
	Q3.setCorrectAnswer("4");

	Q4.setQuestion("\nWhat is the default return type of functions in C++? ");
	Q4.setPossibleAnswers("\n 1) int \n 2) long \n 3) char \n 4) void");
	Q4.setCorrectAnswer("1");

	Q5.setQuestion("\nWhich of the following is a pointer to member declarator? \n");
	Q5.setPossibleAnswers("\n 1) ->* \n 2) ::* \n 3) .*  \n 4) both ->* and ::*");
	Q5.setCorrectAnswer("2");

	Q6.setQuestion("\nReusability of the code can be achieved in C++ through: \n ");
	Q6.setPossibleAnswers("\n 1) Polymorphism \n 2) Inheritance \n 3) Encapsulation \n 4) Relations");
	Q6.setCorrectAnswer("2");

	Q7.setQuestion("\nWhat is the Aloha State? \n");
	Q7.setPossibleAnswers("\n 1) Hawaii \n 2) New Jersey \n 3) Alaska \n 4) New York");
	Q7.setCorrectAnswer("1");

	Q8.setQuestion("\nSan Diego is in which state? \n");
	Q8.setPossibleAnswers("\n 1) Ohio \n 2) Chicago \n 3) Alabama \n 4) California");
	Q8.setCorrectAnswer("4");

	Q9.setQuestion("\nWhat kind of control statement can specify iterations? \n");
	Q9.setPossibleAnswers("\n 1) Pointers \n 2) Arrays \n 3) For loop \n 4) If Statements");
	Q9.setCorrectAnswer("3");

	Q10.setQuestion("\nWhat kind of control statement allows code to be executed repeatedly? \n");
	Q10.setPossibleAnswers("\n 1) Functions \n 2) Aritmetic operators \n 3) While loop \n 4) Continue Statement");
	Q10.setCorrectAnswer("3");

	StartGame(Q1);
	cin >> Q1answer;
	if (Q1answer == Q1.getCorrectAnswer())
		{
			P1points++;
		}

	StartGame(Q2);
	cin >> Q2answer;
	if (Q2answer == Q2.getCorrectAnswer())
		{
			P1points++;
		}

	StartGame(Q3);
	cin >> Q3answer;
	if (Q3answer == Q3.getCorrectAnswer())
		{
			P1points++;
		}

	StartGame(Q4);
	cin >> Q4answer;
	if (Q4answer == Q4.getCorrectAnswer())
		{
			P1points++;
		}

	StartGame(Q5);
	cin >> Q5answer;
	if (Q5answer == Q5.getCorrectAnswer())
		{
			P1points++;
		}

	cout << endl << endl << "Player 1 Turn has ended." << endl;
	cout << "\nWelcome to the Trivia Game!" << endl;
	cout << "Player #2 Press Enter to Begin!" << endl;
	system("pause>nul");

	StartGame(Q6);
	cin >> Q6answer;
	if (Q6answer == Q6.getCorrectAnswer())
		{
			P2points++;
		}


	StartGame(Q7);
	cin >> Q7answer;
	if (Q7answer == Q7.getCorrectAnswer())
		{
			P2points++;
		}

	StartGame(Q8);
	cin >> Q8answer;
	if (Q8answer == Q8.getCorrectAnswer())
		{
			P2points++;
		}

	StartGame(Q9);
	cin >> Q9answer;
	if (Q9answer == Q9.getCorrectAnswer())
		{
			P2points++;
		}

	StartGame(Q10);
	cin >> Q10answer;
	if (Q10answer == Q10.getCorrectAnswer())
		{
			P2points++;
		}

	cout << endl;
	cout << "Player 1 score is: " << P1points << "/5. " << "[ " << P1points * 10000 / 500 << "% ]" << endl;
	cout << "Player 2 score is: " << P2points << "/5. " << "[ " << P2points *10000 / 500 << "% ]" << endl;

	if (P1points > P2points)
	{
		cout << "\nPlayer 1 has Won the Trivia Game!!" << endl;
	}

	if (P2points > P1points)
	{
		cout << "\nPlayer 2 has Won the Trivia Game!!" << endl;
	}

	if (P2points == P1points)
	{
		cout << "\nGame Tied. No one Won the Trivia Game :(" << endl;
	}

	system("pause>nul");

}


	void StartGame(Trivia NewGame)
	{

		cout << NewGame.getQuestion();
		cout << NewGame.getPossibleAnswers() << "\n Please enter a numerical answer (1,2,3 or 4): ";
	}
	




#ifndef TRIVIACLASS_H
#define TRIVIACLASS_H
#include <string>
using namespace std;

class Trivia
{
string question;
string possibleAnswers;
string correctAnswer;
int points;

public:
Trivia(string q, string a, string c, int p)
{
	question = q;
	possibleAnswers = a;
	correctAnswer = c;
	points = p;

}

Trivia()
{
	question = "";
	possibleAnswers = "";
	correctAnswer = "";
	points = 0;
}

Trivia(const Trivia &obj)
{
	question = obj.question;
	possibleAnswers = obj.possibleAnswers;
	correctAnswer = obj.correctAnswer;
	points = obj.points;
}

void setQuestion(string Q)
{
	question = Q;
}

void setPossibleAnswers(string A)
{
	possibleAnswers = A;
}

void setCorrectAnswer(string C)
{
	correctAnswer = C;
}

void setIdNumber(int P)
{
	points = P;
}

string getQuestion()
{
	return question;
}

string getPossibleAnswers()
{
	return possibleAnswers;
}

string getCorrectAnswer()
{
	return correctAnswer;
}


int getPoints()
{
	return points;
}

};

// Function prototype
void StartGame(Trivia);

#endif


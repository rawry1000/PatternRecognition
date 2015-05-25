#include <iostream>
#include <cmath>
using namespace std;
//Author: Caiden Sacks

void allTest();
void additionTest();
void subtractionTest();
void multiplicationTest();
void divisionTest();
void powerTest();
bool Again();

double num1, num2, num3, num4, num5;
double rule;
bool addRule, subRule, multRule, divRule, powRule;

char contVar;

int main()
{
	allTest();
}

void additionTest()
{
	double addTest1, addTest2, addTest3, addTest4;

	addTest1 = num2 - num1;
	addTest2 = num3 - num2;
	addTest3 = num4 - num3;
	addTest4 = num5 - num4;
	double* addend = &addTest1;

	if (addTest1 == addTest2 && addTest2 == addTest3 && addTest3 == addTest4)
	{
		addRule = true;
		cout << "The rule for the numbers you entered is y = x + " << *addend << endl;
	}
	else
		addRule = false;
}

void subtractionTest()
{
	double subTest1, subTest2, subTest3, subTest4;

		subTest1 = num1 - num2;
		subTest2 = num2 - num3;
		subTest3 = num3 - num4;
		subTest4 = num4 - num5;
		double* subtrahend = &subTest1;

		if (subTest1 == subTest2 && subTest2 == subTest3 && subTest3 == subTest4)
		{
			subRule = true;
			cout << "The rule for the numbers you entered is y = x - " << *subtrahend << endl;
		}
		else
			subRule = false;
}

void multiplicationTest()
{
	double multTest1, multTest2, multTest3, multTest4;

	multTest1 = num2 / num1;
	multTest2 = num3 / num2;
	multTest3 = num4 / num3;
	multTest4 = num5 / num4;
	double* factor = &multTest1;

	if (multTest1 == multTest2 && multTest2 == multTest3 && multTest3 == multTest4)
	{
		multRule = true;
		cout << "The rule for the numbers you entered is y = " << *factor << "x" << endl;
	}
	else
		multRule = false;
}

void divisionTest()
{
	double divTest1, divTest2, divTest3, divTest4;

	divTest1 = num1 / num2;
	divTest2 = num2 / num3;
	divTest3 = num3 / num4;
	divTest4 = num4 / num5;
	double* divisor = &divTest1;

	if (divTest1 == divTest2 && divTest2 == divTest3 && divTest3 == divTest4)
	{
		divRule = true;
		cout << "The rule for the numbers you entered is y = x / " << *divisor << endl;
	}
	else
		divRule = false;
}

void powerTest()
{
	double powTest1, powTest2, powTest3, powTest4;
	

	powTest1 = log(num2) / log(num1);
	powTest2 = log(num3) / log(num2);
	powTest3 = log(num4) / log(num3);
	powTest4 = log(num5) / log(num4);
	double* power = &powTest1;

	if (powTest1 == powTest2 && powTest2 == powTest3 && powTest3 == powTest4)
	{
		powRule = true;
		cout << "The rule for the numbers you entered is y = x ^ " << *power << endl;
	}
	else
		powRule = false;
}

void allTest()
{
	do
	{
		cout << "Please enter five numbers: ";
		cin >> num1 >> num2 >> num3 >> num4 >> num5;

		additionTest();

		subtractionTest();

		multiplicationTest();

		divisionTest();
		
		powerTest();

		if (addRule != true && subRule != true && multRule != true && divRule != true && powRule != true)
		{
			cout << "No discernible pattern was found." << endl;
		}
	} while (Again() != false);
}

bool Again()
{
	cout << "If you would like to quit the program, enter 'Q'. If you would like to enter another set, enter anything except 'Q': ";
	cin >> contVar;
	if (contVar == 'Q' || contVar == 'q')
	{
		return false;
	}
	else
	{
		return true;
	}
}

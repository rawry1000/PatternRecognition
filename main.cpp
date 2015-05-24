#include <iostream>
using namespace std;
//Author: Caiden Sacks

void allTest();
void additionTest();
void subtractionTest();
void multiplicationTest();
void divisionTest();
bool Again();

double num1, num2, num3, num4, num5;
double rule;
bool addRule;
bool subRule;
bool multRule;
bool divRule;
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

	if (addTest1 == addTest2 && addTest2 == addTest3 && addTest3 == addTest4)
	{
		rule = addTest1;
		addRule = true;
		cout << "The rule for the numbers you entered is y = x + " << rule << endl;
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

		if (subTest1 == subTest2 && subTest2 == subTest3 && subTest3 == subTest4)
		{
			rule = subTest1;
			subRule = true;
			cout << "The rule for the numbers you entered is y = x - " << rule << endl;
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


	if (multTest1 == multTest2 && multTest2 == multTest3 && multTest3 == multTest4)
	{
		rule = multTest1;
		multRule = true;
		cout << "The rule for the numbers you entered is y = " << rule << "x" << endl;
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

	if (divTest1 == divTest2 && divTest2 == divTest3 && divTest3 == divTest4)
	{
		rule = divTest1;
		divRule = true;
		cout << "The rule for the numbers you entered is y = x / " << rule << endl;
	}
	else
		divRule = false;
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

		if (addRule != true && subRule != true && multRule != true && divRule != true)
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

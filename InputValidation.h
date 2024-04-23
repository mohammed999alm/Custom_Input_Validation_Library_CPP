#pragma once
#include "clsDate.h"
#include <iostream>
using namespace std;


class InputValidation
{

public :

	static bool isNumberBetween(int number, int from, int to) 
	{
		return (number >= from && number <= to);
	}

	static bool isNumberBetween(double number, double from, double to)
	{
		return (number >= from && number <= to);
	}


	static bool isDateBetween(clsDate date, clsDate dateFrom, clsDate dateTo) 
	{
		if (dateFrom.compareDates(dateTo) == clsDate::After)
			clsDate::swapDates(dateFrom, dateTo);

		if (date.compareDates(dateFrom) == clsDate::Before
			||
			date.compareDates(dateTo) == clsDate::After
			)
			return false;

		return true;
	}

	static int readIntegerNumber(string message) 
	{
		int number = 0;

		double input;
		cin >> input;

		while (cin.fail()) 
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			cout << message << endl;
			cin >> input;
		}

		number = input;

		return number;
	}

	static double readDoubleNumber(string message)
	{
		double number = 0;

		cin >> number;

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			cout << message << endl;
			cin >> number;
		}

		return number;
	}


	static int readIntegerNumberBetween(int from, int to, string message) 
	{
		int number = 0; 
		

		number = readIntegerNumber("Invalid Number, Enter Again.");

		while (number < from || number > to) 
		{
			cout << message << endl;
			number = readIntegerNumber("Invalid Number, Enter Again.");
		}
		

		return number;
	}

	static double readDoubleNumberBetween(double from, double to, string message)
	{
		double number = 0;

		number = readDoubleNumber("Invalid Number, Enter Again.");

		while (number < from || number > to)
		{
			cout << message << endl;
			number = readDoubleNumber("Invalid Number, Enter Again.");
		}

		return number;
	}


	static bool isValidDate(clsDate date) 
	{
		return date.isValid();
	}
};


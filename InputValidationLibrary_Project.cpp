#include <iostream>
#include "InputValidation.h"
using namespace std;

int main() 
{
	
	cout << InputValidation::isNumberBetween(15, 10, 20) << endl;

	cout << InputValidation::isNumberBetween(20.91, 10.3, 20.9) << endl;

	cout << InputValidation::isDateBetween(clsDate(), clsDate(1, 4, 2024), clsDate(1, 5, 2024)) << endl;
	cout << InputValidation::isDateBetween(clsDate(), clsDate(1, 4, 2024), clsDate(15, 4, 2024)) << endl;
	cout << InputValidation::isDateBetween(clsDate(), clsDate(1, 5, 2024), clsDate(1, 4, 2024)) << endl;
	cout << InputValidation::isDateBetween(clsDate(), clsDate(1, 5, 2024), clsDate(15, 5, 2024)) << endl;
	cout << InputValidation::isDateBetween(clsDate(1, 4, 2024), clsDate(1, 4, 2024), clsDate(1, 5, 2024)) << endl;
	cout << InputValidation::isDateBetween(clsDate(1, 5, 2024), clsDate(1, 4, 2024), clsDate(1, 5, 2024)) << endl;

	cout << "\n\nPlease Enter A Number  ? :  \n";
	
	int x = InputValidation::readIntegerNumber("Invalid Number, Enter Again :");
	cout << "x = " << x << endl;

	cout << "\n\nPlease Enter A Number  ? :  \n";

	double y = InputValidation::readDoubleNumber("Invalid Number, Enter Again :");
	cout << "y = " << y << endl;

	cout << "\nPlease Enter A Number Between 1 and 100: \n";
	int a = InputValidation::readIntegerNumberBetween(1, 100, "Number Is Not Within The Range, Enter Again :");
	
	cout << "a = " << a << endl;

	cout << "\nPlease Enter A Number Between 10.5 and 105.6: \n";
	double b = InputValidation::readDoubleNumberBetween(10.5, 105.6, "Number Is Not Within The Range, Enter Again :");

	cout << "b = " << b << endl;

	cout<< endl << InputValidation::isValidDate(clsDate(32, 1, 2024));
	cout<< endl << InputValidation::isValidDate(clsDate(31, 1, 2024));
	cout<< endl << InputValidation::isValidDate(clsDate(31, 13, 2024));
	cout<< endl << InputValidation::isValidDate(clsDate(31, 12, 2024));
	cout<< endl << InputValidation::isValidDate(clsDate(29, 2, 2023));
	cout<< endl << InputValidation::isValidDate(clsDate(29, 2, 2024));
	cout<< endl << InputValidation::isValidDate(clsDate(30, 2, 2023));



	system("pause > 0");

	return 0;
}
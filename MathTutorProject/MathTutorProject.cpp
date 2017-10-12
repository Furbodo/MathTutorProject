// MathTutorProject.cpp : Defines the entry point for the console application.
// Justin Balogh Oct 9th

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;
void main()
{

	int firstNumer;
	int secondNumer;
	int firstDenom;
	int secondDenom;
	int multiplicationResultOne;
	int multiplicationResultTwo;
	double firstFraction;
	double secondFraction;
	double decimalDivisionResult;
	
	cout << setprecision(4) << fixed << showpoint; // output flags
		// prompt and input!
	cout << "Enter the first numberator: ";
	cin >> firstNumer; cout << endl;
	cout << "Enter the first denominator: ";
	cin >> firstDenom; cout << endl;
	cout << endl << endl;
	cout << "Enter the second numberator: ";
	cin >> secondNumer; cout << endl;
	cout << "Enter the second denominator: ";
	cin >> secondDenom; cout << endl;
	cout << endl;

	// for displaying the multiplication work
	multiplicationResultOne = firstNumer * secondDenom;
	multiplicationResultTwo = firstDenom * secondNumer;
	// does all the mathematical work for decimal result
	firstFraction = (double)firstNumer / (double)firstDenom;
	secondFraction = static_cast<double> (secondNumer) / static_cast<double> (secondDenom);
	decimalDivisionResult = firstFraction / secondFraction;

	cout << "Step 1. Original equation: " << firstNumer << "/" << firstDenom << " / " << secondNumer << "/" << secondDenom << " = ?" << endl;
	system("pause"); // add a pause here
	cout << "Step 2. Convert equation: " << firstNumer << "/" << firstDenom << " * " << secondDenom << "/" << secondNumer << " = ?" << endl;
	system("pause"); // pause
	cout << "Step 3. Perform Multiplication: " << firstNumer << "/" << firstDenom << " * " << secondDenom << "/" << secondNumer << " = " << multiplicationResultOne << "/" << multiplicationResultTwo << endl;
	system("pause"); // pause
	cout << "Convert to decimal: " << multiplicationResultOne << "/" << multiplicationResultTwo << " = " << decimalDivisionResult << endl;
}
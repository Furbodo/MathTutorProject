// MathTutorProject.cpp : Defines the entry point for the console application.
//

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
	double firstFraction;
	double secondFraction;
	cout << setprecision(2) << fixed << showpoint; // output flags

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

	int multiplicationResultOne = firstNumer * secondDenom;
	int multiplicationResultTwo = firstDenom * secondNumer;
	// for displaying the multiplication work

	firstFraction = (double)firstNumer / (double)firstDenom;
	secondFraction = (double)secondNumer / (double)secondDenom;

	cout << "Step 1. Original equation: " << firstNumer << "/" << firstDenom << " / " << secondNumer << "/" << secondDenom << " = ?" << endl;
	// add a pause here
	cout << "Step 2. Convert equation: " << firstNumer << "/" << firstDenom << " * " << secondDenom << "/" << secondNumer << " = ?" << endl;
	// pause
	cout << "Step 3. Perform Multiplication: " << firstNumer << "/" << firstDenom << " * " << secondDenom << "/" << secondNumer << " = " << multiplicationResultOne << "/" << multiplicationResultTwo << endl;
	// pause
	cout << "Convert to decimal: " << firstNumer;
}
// This program demonstrates the FeetInches class's overloaded
// binary and relational operators.
#include <iostream>
#include "FeetInches.h"
using namespace std;

int main()
{
	int feet, inches;	// To hold input for feet and inches

	// Create some FeetInches objects
	FeetInches first, second, third;

	// Get a distance from the user
	cout << "Enter distance in feet and inches: ";
	cin >> feet >> inches;

	// Store the distance in the first object
	first.setFeet(feet);
	first.setInches(inches);

	// Get another distance from the user
	cout << "Enter distance in feet and inches: ";
	cin >> feet >> inches;

	// Store the distance in the second object
	second.setFeet(feet);
	second.setInches(inches);

	// Assign first + second to third
	third = first + second;

	// Display the result
	cout << "\nFirst + second = ";
	cout << third.getFeet() << " feet, ";
	cout << third.getInches() << " inches.\n";

	// Assign first - second to third
	third = first - second;

	// Display the result
	cout << "\nFirst - second = ";
	cout << third.getFeet() << " feet, ";
	cout << third.getInches() << " inches.\n";

	// Compare the objects first and second 
	if (first == second)
		cout << "\nFirst is equal to second.\n";
	if (first > second)
		cout << "\nFirst is greater than second.\n";
	if (first < second)
		cout << "\nFirst is less than second.\n";
	return 0;
}
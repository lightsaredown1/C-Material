#pragma once
#ifndef FEETINCHES_H
#define FEETINCHES_H

// The FeetInches class holds distance or measurements
// expressed in feet and inches.

class FeetInches
{
private:
	int feet;
	int inches;
	void simplify();
public:
	// Constructor
	FeetInches(int f = 0, int i = 0)
	{
		feet = f;
		inches = i;
		simplify();
	}

	// Mutator Functions
	void setFeet(int f)
	{
		feet = f;
	}

	void setInches(int i)
	{
		inches = i;
	}

	// Accessor Functions
	int getFeet() const
	{
		return feet;
	}

	int getInches() const
	{
		return inches;
	}

	// Overloaded operator functions
	FeetInches operator + (const FeetInches&);				// Overloaded +
	FeetInches operator - (const FeetInches&);				// Overloaded -
	FeetInches operator ++();								// Overloaded Prefix increment
	FeetInches operator ++(int);							// Overloaded Postfix increment
	bool operator > (const FeetInches&);					// Overloaded Greater Than 
	bool operator < (const FeetInches&);					// Overloaded Less Than
	bool operator == (const FeetInches&);					// Overloaded Equal operator
};
#endif // !FEETINCHES_H

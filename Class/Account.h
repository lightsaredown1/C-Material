#pragma once
// Specification file for the Account Class
#ifndef ACCOUNT_H
#define ACCOUNT_H	

class Account 
{
// Declaration of private members in the class.
private:
	double balance;
	double interestRate;
	double interest;
	int transactions;

// Declaration of public members and 
public:
	Account(double iRate = 0.045, double bal = 0);

	void setInterestRate(double iRate);
	
	void makeDeposit(double amount);

	bool withdraw(double amount);

	void calcInterest(); 

	double getInterestRate() const;

	double getInterest() const;

	double getBalance() const;

	int getTransactions() const;
};
#endif // !ACCOUNT_H

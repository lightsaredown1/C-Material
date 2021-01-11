// Implementation File for class Account
#include "Account.h"

// Account class constructor
Account::Account(double iRate , double bal)
{
	balance = bal;
	interestRate = iRate;
	interest = 0;
	transactions = 0;
}

// Sets the interest rate in Account object
void Account::setInterestRate(double iRate)
{
	interestRate = iRate;
}

// Makes a deposit into the Account object
void Account::makeDeposit(double amount)
{
		balance += amount;
		transactions++;
}

// Boolean withdraw function that tests the balance against
// the withdraw amount.
bool Account::withdraw(double amount)
{
	// If the amount to be withdrawed exceeds the balance, 
	// return false.
	if (balance < amount)
		return false;	// Not enough money in the account
	// Else, deduct the funds from the account.
	else
	{
		balance -= amount;
		transactions++;
		return true;
	}
}

// Calcualtes interest accrued over the period 
// and adds it to the account balance.
void Account::calcInterest()
{
	interest = balance * interestRate;
	balance += interest;
}

// Allows the private member data to be displayed 
// from account object.
double Account::getInterestRate() const
{
	return interestRate;
}

// Allows the private member data to be displayed
// from the account object.
double Account::getInterest() const
{
	return interest;
}

// Allows the private member data to be displayed
// from the account object.
double Account::getBalance() const
{
	return balance;
}

// Allows the private member data to be displayed 
// from the account object.
int Account::getTransactions() const
{
	return transactions;
}
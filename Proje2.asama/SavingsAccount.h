#pragma once
#ifndef SAVINGSACCOUNT_H
#define	SAVINGSACCOUNT_H
#include "Account.h"
class SavingsAccount : public Account
{
private:
	double interestRate;
public:
	SavingsAccount(double = 0.0, long = 0, Customer* = NULL, double = 0.0);
	SavingsAccount(Customer*);
	SavingsAccount &setInterestRate(double);
	double getInterestRate();
	bool debit(double);
	string getAccountType();
	void print();
	void endOfDay();
	~SavingsAccount();
};
#endif

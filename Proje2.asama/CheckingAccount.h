#pragma once
#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include "Account.h"
class CheckingAccount : public Account
{
private:
	double transactionFee;
	double creditInterestRate;
	void chargeFee();
public:
	CheckingAccount(double = 0.0, long = 0, Customer* = NULL, double = 0.0, double = 0.0);
	CheckingAccount(Customer*);
	CheckingAccount &setTransactionfee(double);
	double getTransactionFee();
	CheckingAccount &setCreditInterestRate(double);
	double getCreditInterestRate();
	void credit(double);
	bool debit(double);
	string getAccountType();
	void print();
	void endOfDay();
	~CheckingAccount();
};
#endif
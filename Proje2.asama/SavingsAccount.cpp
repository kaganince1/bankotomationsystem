#include "SavingsAccount.h"



SavingsAccount::SavingsAccount(double _balance, long _accountNumber, Customer* _owner, double _interestRate) :Account(_balance, _accountNumber, _owner)
{
	interestRate = _interestRate;
}

SavingsAccount::SavingsAccount(Customer* _owner) : Account(0, 0, _owner), interestRate(0)
{
}

SavingsAccount & SavingsAccount::setInterestRate(double rate)
{
	interestRate = rate;
	return *this;
}

double SavingsAccount::getInterestRate()
{
	return interestRate;
}

bool SavingsAccount::debit(double amount)
{
	if ((getBalance() - amount > 0))
	{
		Account::debit(amount);
		return true;
	}
	else
	{
		return false;
	}
}

string SavingsAccount::getAccountType()
{
	return "Savings Account";
}

void SavingsAccount::print()
{
	Account::print();
	cout << "Interest rate : " << interestRate << endl;
}

void SavingsAccount::endOfDay()
{
	credit(interestRate);
}

SavingsAccount::~SavingsAccount()
{
}

#include "Account.h"

Account::Account(double _balance, long _accountNumber, Customer* _owner)
{
	balance = _balance;
	accountNumber = _accountNumber;
	owner = _owner;
}

Account & Account::setBalance(double _balance)
{
	balance = _balance;
	return *this;
}

double Account::getBalance()
{
	return balance;
}

Account & Account::setAccountNumber(long _accountNumber)
{
	accountNumber = _accountNumber;
	return *this;
}

long Account::getAccountNumber()
{
	return accountNumber;
}

void Account::credit(double amount)
{
	balance += amount;
}

bool Account::debit(double amount)
{
	if (balance >= amount)
	{
		balance -= amount;
		return true;
	}
	else
	{
		return false;
	}
}

void Account::print()
{
	cout << "Accout owner name : " << owner->getName() << endl;
	cout << "Account balance : " << balance << endl;
	cout << "Account number : " << accountNumber << endl;
}


bool Account::setAccountOwner(Customer *_owner)
{
	if (_owner != NULL)
	{
		owner = _owner;
		return true;
	}
	return false;
}

Account::~Account()
{
}

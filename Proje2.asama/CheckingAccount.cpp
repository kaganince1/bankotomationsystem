#include "CheckingAccount.h"



void CheckingAccount::chargeFee()
{
	Account::debit(transactionFee);
}

CheckingAccount::CheckingAccount(double _balance, long _accountNumber, Customer* _owner, double fee, double interestRate) :Account(_balance, _accountNumber, _owner)
{
	transactionFee = fee;
	creditInterestRate = interestRate;
}

CheckingAccount::CheckingAccount(Customer* _owner) :Account(0, 0, _owner), transactionFee(0), creditInterestRate(0)
{
}

CheckingAccount & CheckingAccount::setTransactionfee(double fee)
{
	transactionFee = fee;
	return *this;
}

double CheckingAccount::getTransactionFee()
{
	return transactionFee;
}

CheckingAccount & CheckingAccount::setCreditInterestRate(double rate)
{
	creditInterestRate = rate;
	return *this;
}

double CheckingAccount::getCreditInterestRate()
{
	return creditInterestRate;
}

void CheckingAccount::credit(double amount)
{
	Account::credit(amount);
	chargeFee();
}

bool CheckingAccount::debit(double amount)
{
	if ((getBalance() - amount) > 0)
	{
		Account::debit(amount);
		return true;
	}
	else
	{
		chargeFee();
		return false;
	}
}

string CheckingAccount::getAccountType()
{
	return "Checking Account";
}

void CheckingAccount::print()
{
	Account::print();
	cout << "Transaction fee = " << transactionFee << endl << "Credit interest rate = " << creditInterestRate << endl;
}

void CheckingAccount::endOfDay()
{
	Account::debit(creditInterestRate);
}

CheckingAccount::~CheckingAccount()
{
}

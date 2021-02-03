#pragma once
#ifndef INDIVIDUALCUSTOMER_H
#define INDIVIDUALCUSTOMER_H
#include "Customer.h"
class IndividualCustomer : public Customer
{
private:
	int age;
	string title;
public:
	IndividualCustomer(string = "", string = "", string = "", int = 0, string = "");
	IndividualCustomer &setAge(int);
	int getAge();
	IndividualCustomer &setTitle(string);
	string getTitle();
	void print();
	string getCustomerType();
	~IndividualCustomer();
};
#endif

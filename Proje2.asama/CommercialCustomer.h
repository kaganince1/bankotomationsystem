#pragma once
#ifndef COMMERCIALCUSTOMER_H
#define COMMERCIALCUSTOMER_H
#include "Customer.h"
class CommercialCustomer :public Customer
{
private:
	string businessName;
public:
	CommercialCustomer(string = "", string = "", string = "", string = "");
	CommercialCustomer &setBusinessName(string);
	string getBusinessName();
	void print();
	string getCustomerType();
	~CommercialCustomer();
};
#endif

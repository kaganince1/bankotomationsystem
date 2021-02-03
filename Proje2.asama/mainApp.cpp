#include "Bank.h"
#include "CommercialCustomer.h"
#include "IndividualCustomer.h"
void main()
{
	Customer *icustomer1 = new IndividualCustomer("kagan", "antalya", "kaganince1", 21, "musteri");
	Customer *icustomer2 = new IndividualCustomer("ilhan", "izmir", "ilhanmertalan35", 22, "musteri");
	Customer *icustomer3 = new IndividualCustomer("mustafa", "yozgat", "mustafagundor66", 20, "musteri");
	Customer *ccustomer1 = new CommercialCustomer("ali", "istanbul", "aliveli007", "Ali Hirdavat");
	Customer *ccustomer2 = new CommercialCustomer("veli", "kocaeli", "aliveli11", "Veli Vidanjor");
	Customer *ccustomer3 = new CommercialCustomer("mehmet", "burdur", "mimarmehmet", "Mahmet Mimarlik");
	cout << "------------------Individual customers------------------" << endl;
	icustomer1->print();
	cout << "------------------" << endl;
	icustomer2->print();
	cout << "------------------" << endl;
	icustomer3->print();
	cout << "------------------Commercial customers------------------" << endl;
	ccustomer1->print();
	cout << "------------------" << endl;
	ccustomer2->print();
	cout << "------------------" << endl;
	ccustomer3->print();
	Account *checac1 = new CheckingAccount(5000, 123456, icustomer1, 0.5, 0.8);
	Account *checac2 = new CheckingAccount(12500, 234567, icustomer2, 0.5, 0.8);
	Account *checac3 = new CheckingAccount(75000, 987654, ccustomer1, 1.5, 0.8);
	Account *saviac1 = new SavingsAccount(55000, 34567, icustomer3, 6);
	Account *saviac2 = new SavingsAccount(230000, 123456, icustomer1, 6);
	Account *saviac3 = new SavingsAccount(9000, 876543, ccustomer2, 12.5);
	cout << "------------------Checking Account Test------------------" << endl;
	checac1->print();
	cout << "---------Credit 1250---------" << endl;
	checac1->credit(1250);
	checac1->print();
	cout << "---------Debit 250---------" << endl;
	checac1->debit(250);
	checac1->print();
	cout << "---------End of day---------" << endl;
	checac1->endOfDay();
	checac1->print();
	cout << "------------------Savings Account Test------------------" << endl;
	saviac2->print();
	cout << "---------Credit 11500---------" << endl;
	saviac2->credit(11500);
	saviac2->print();
	cout << "---------Debit 1500---------" << endl;
	saviac2->debit(1500);
	saviac2->print();
	cout << "---------End of day---------" << endl;
	saviac2->endOfDay();
	saviac2->print();


	Bank kaganBank("Is bankasi", "1");
	kaganBank.addCustomer(ccustomer1);
	kaganBank.addCustomer(icustomer1);
	kaganBank.addCustomer(ccustomer3);
	cout << "------------------Kagan Bank Customers List------------------" << endl;
	kaganBank.listCustomers();
	kaganBank.addNewAccount(checac1);
	kaganBank.addNewAccount(saviac1);
	kaganBank.addNewAccount(saviac3);
	cout << "------------------Kagan Bank Accounts List------------------" << endl;
	kaganBank.listAccounts();
	kaganBank.removeAccount(34567);
	cout << "------------------After Removing Accounts List------------------" << endl;
	kaganBank.listAccounts();

	system("pause");
}
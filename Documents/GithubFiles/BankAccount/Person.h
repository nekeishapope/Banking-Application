#pragma once
#include<iostream>
#include"Account.h"
#include<string.h>
#include "Payment.h"

#define PMSIZE 10
#define SIZE 2
const int nameSize = 30;
using namespace std;

class Person : public Account{
private:
	string name;
	long id;
	string type;
	//int choice;
	Account *accountobj[4];
	//Account accountobj;
	Payment* pmobj[PMSIZE];
	

public:
	Person() {
		name = " ";
		id = 0;
		/*for (int i = 1; i < SIZE; i++)
		{
			accountobj[SIZE] = nullptr;
		}*/
	}
	Person(string _name, long _idNumber) {
		name = _name;
		
		id = _idNumber;
	}
	
	void setName(string s_name) {
		name = s_name;
	}
	string getName() {
		return name;
	}
	void setId(long s_id)
	{
		id = s_id;
	}
	long getId()
	{
		return id;
	}
	string getType() {
		return type;
	}
	void setType(string _type) {
		type = _type;
	}
	void createAccount(Account acc) {
		
		accountobj[0] = new Account;
		accountobj[0]->setaccountType(type);
		accountobj[1] = new Account;
		accountobj[2]->setaccountType(type);
		
	}
	Account getAccount() {
		return **accountobj;
	}
	
	//void paymentSummary() {
	//	cout << "Person" << setw(15);
	//	cout << "Bills" << setw(15);
	//	cout << "Shopping" << setw(15);
	//	cout << "Grocery" << setw(15);
	//	cout << "Fuel" << setw(15);
	//	cout << "Medicine" << setw(15);
	//	cout << "Others" << setw(15);
	//}
};

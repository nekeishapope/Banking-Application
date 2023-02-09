
#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<string.h>
using namespace std;
class Account
{
public:
	Account(double = 0.0);
	Account(string accname, double _balance);
	//~Account();
	virtual void credit(double amount);
	virtual bool debit(double witndraw);
	double getBalance();
	void setBalance(double currentBalance);
	virtual void setaccountType(string type);
	string getaccountType();
	void balance(double& balance);
	
private:
	double m_balance;
	string accountType;
};

#endif



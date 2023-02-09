#pragma once
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include<iostream>
#include"Account.h"
using namespace std;
class SavingsAccount : public Account {
public:
	
	SavingsAccount() {
		interestRate = 0;
	}
	SavingsAccount(double initialBalance, double interest_rate)
		:Account(initialBalance)
	{
		if (interest_rate < 0.0)
			throw std::invalid_argument::invalid_argument("Interest rate must be greater than $0.0");
		else
		{
			interestRate = interest_rate;
		}
	}
	double calculateInterest()
	{
		return getBalance() * interestRate;
	}
private:
	double interestRate;
};
#endif


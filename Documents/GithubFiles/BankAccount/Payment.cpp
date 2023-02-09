#include<iostream>
#include<istream>
#include<iomanip>
#include<string>
#include"Payment.h"
#include"Person.h"

using namespace std;
Account* accountobj[4];
int main() {
	/*
	CashPayment cashpayment1(25.2, "Bills");
	CashPayment cashpayment2(50.0, "fuel");

	CreditCardPayment ccpayment1(100.25, "Jame", "2/25/2022", "13425679");
	CreditCardPayment ccpayment2(45.30, "Karl", "2/12/2021", "23456781");
				//Option 1 (set the values)
	cout << "Cash Payment 1: " << endl;
	cashpayment1.paymentDetails();
	cout << '\n';
	cout << "Cash Payment 2: " << endl;
	cashpayment2.paymentDetails();
	cout << '\n';
	cout << "Credit Card Payment 1: " << endl;
	ccpayment1.paymentDetails();
	cout << '\n';
	cout << "Credit Card Payment 2: " << endl;
	ccpayment2.paymentDetails();
	*/
			//Option 2(user input values)
	double payment = 0.0;
	int payment_option;
	int userChoice = 1;
	CashPayment cashpayment1;
	CreditCardPayment ccpayment1;
	cout << "Welcome to Payment System" << endl;
	cout << "Select the type of payment you want to make" << endl;
	cout << '\n';
	cout << setw(10) << "1- Cash/Debit Payment" << endl;
	cout << setw(10) << "2- Credit Card Payment" << endl;
	cin >> payment_option;

	if (payment_option == 1) {
	cout << "Enter the Payment amount: ";
	cin >> payment;
	cashpayment1.setPayment(payment);
	cashpayment1.PaymentMenu();
	cin >> userChoice;

	if (userChoice == 1) {
		cashpayment1.setTypeOfPayment("Bills");
	}
	if (userChoice == 2) {
		cashpayment1.setTypeOfPayment("Shopping");
	}
	if (userChoice == 3) {
		cashpayment1.setTypeOfPayment("Grocery");
	}
	if (userChoice == 4) {
		cashpayment1.setTypeOfPayment("Fuel");
	}
	if (userChoice == 5) {
		cashpayment1.setTypeOfPayment("Medicine");
	}
	if (userChoice == 6) {
		cashpayment1.setTypeOfPayment("Others");
	}
	

	cashpayment1.paymentDetails();
	}
	else if (payment_option == 2) {
		cout << "Enter the Payment amount: ";
		cin >> payment;
		ccpayment1.setPayment(payment);
		cashpayment1.PaymentMenu();
		cin >> userChoice;

		if (userChoice == 1) {
			ccpayment1.setTypeOfPayment("Bills");
		}
		if (userChoice == 2) {
			ccpayment1.setTypeOfPayment("Shopping");
		}
		if (userChoice == 3) {
			ccpayment1.setTypeOfPayment("Grocery");
		}
		if (userChoice == 4) {
			ccpayment1.setTypeOfPayment("Fuel");
		}
		if (userChoice == 5) {
			ccpayment1.setTypeOfPayment("Medicine");
		}
		if (userChoice == 6) {
			ccpayment1.setTypeOfPayment("Others");
		}


		ccpayment1.paymentDetails();
	}

	return 0;
}

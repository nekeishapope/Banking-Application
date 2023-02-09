#pragma once
#include<string>
#include<iostream>
#include<iomanip>

using namespace std;

class Payment
{
public:
	Payment() {
		paymentAmount = 0.0;
		typeOfPayment = "";
	}

	Payment(float amount, string _type) {
		paymentAmount = amount;
		typeOfPayment = _type;

	}
	
	void setTypeOfPayment(string paymentType) {
		typeOfPayment = paymentType;
	}
	string getTypeOfPayment() {
		return typeOfPayment;
	}
	void setPayment(float AmountPaid) {
		paymentAmount = AmountPaid;
	}
	
	double getPayment() {
		return paymentAmount;
	}
	
	virtual void paymentDetails() {
		cout << "The amount paid is: " << paymentAmount << endl;
		cout << "The type of payment is: " << typeOfPayment << endl;
	}
	
protected:
	float paymentAmount;
	string typeOfPayment;
};

class CashPayment : public Payment
{
public:
	CashPayment() : Payment(){}
	CashPayment(float Camount, string Ctype) : Payment(Camount, Ctype) {}
	void setMethod(string _method) {
		method = _method;
	}
	string getMethod() {
		return method;
	}
	void paymentDetails() {
		//Payment::paymentDetails();
		//cout << "Payment method(Cash / Debit): " << getPayment() << endl;
		cout << "You have made a CASH/Debit payment of " << Payment::getPayment() << " CAD in " << Payment::getTypeOfPayment() << endl;
	}
	void PaymentMenu() {
		cout << "Select the Payment Type: " << endl <<  endl;
		cout << setw(10) << "1 - Bills" << endl;
		cout << setw(10) << "2 - Shopping" << endl;
		cout << setw(10) << "3 - Grocery" << endl;
		cout << setw(10) << "4 - Fuel" << endl;
		cout << setw(10) << "5 - Medicine" << endl;
		cout << setw(10) << "6 - Others" << endl;
	}
	

private:
	string method;
	
};
class CreditCardPayment : public Payment
{
	string name;
	string expirationDate;
	string creditCardNumber;
	double payAmount;

public:
	CreditCardPayment() {

		name = '\0';
		expirationDate = '\0';
		creditCardNumber = '\0';
	}
	CreditCardPayment(float amountPaid, string _name, string _expDate, string _cardNumber) {
		payAmount = amountPaid;
		name = _name;
		expirationDate = _expDate;
		creditCardNumber = _cardNumber;
	}
	double getPaymentAmount() {
		return payAmount;
	}
	void setPaymentAmount(float CCpayAmount) {
		payAmount = CCpayAmount;
	}
	void paymentDetails() {
		cout << "You have made a Credit Card payment of " << Payment::getPayment() << " CAD in " << Payment::getTypeOfPayment() << endl;
		/*cout << "Payment: " <<  getPaymentAmount() << endl;
		cout << "Card Number: " << creditCardNumber << endl;
		cout << "Name On card: " << name << endl;
		cout << "Expiration Date: " << expirationDate << endl;*/
	}
	void PaymentMenu() {
		cout << setw(10) << "1 - Bills" << endl;
		cout << setw(10) << "2 - Shopping" << endl;
		cout << setw(10) << "3 - Grocery" << endl;
		cout << setw(10) << "4 - Fuel" << endl;
		cout << setw(10) << "5 - Medicine" << endl;
		cout << setw(10) << "6 - Others" << endl;
	}
};
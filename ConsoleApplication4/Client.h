#pragma once
#include<iostream>
#include"Person.h"
class Client:public Person
{
	double balance;
public:
	Client(string name, string password, int id,double balance):Person( name, password, id) {
		this->balance = balance;
	}
	void setbalance(double balance) {
		if (balance >= 1500) {
		this->balance = balance;
		}
	}
	double getbalance() {
		return balance;
	}
	void deposit(double amount) {
		balance += amount;
	}
	void withdraw(double amount) {
		balance -= amount;
	}
	void TransferTo(double amount, Client& recipient) {
		balance -= amount;
		recipient.deposit(amount);
	}
	void checkBalance() {
		cout << "Balance  :" << balance << endl;
	}
	void Display_Function() {
		display();
		checkBalance();
	}
};


#pragma once
#include<iostream>
#include"Person.h"
using namespace std;
class Employee :public Person
{
private:
	double salary;
public:
	Employee(int id, string name, string password, double salary) :Person(name, password, id)
	{
		this->salary = salary;
	}

	void setSalary(double salary) {
		if (salary >= 5000) {
			this->salary = salary;
		}
		else {
			cout << ("Salary must be at least 5000.") << endl;
		}
	}

	double getSalary() {
		return salary;
	}
	void display() {
		cout << "ID: " << id << endl;
		cout << "Name: " << name << endl;
		cout << "Salary: " << salary << endl;
	}
};





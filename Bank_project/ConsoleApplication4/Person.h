#pragma once
#include<iostream>
using namespace std;
class Person
{
protected:
	string name,password;
	int id;
public:
	Person(string name,string password,int id) {
		this->name = name;
		this->password = password;
		this->id = id;
	}
	void setname(string name){
		if (sizeof(name) >= 5 && sizeof(name) <= 20) {
		this->name = name;
		}
		else {
			cout << ("Name must be alphabetic chars and between 5 and 20 characters.") << endl;
		}
	}
	void setpassword(string password) {
		if (sizeof(password) >= 8 && sizeof(password) <= 20) {
			this->password = password;
		}
		else {
			cout << ("Password must be between 8 and 20 characters.") << endl;
		}
	}
	string getname() {
		return name;
	}
	string getpassword() {
		return password;
	}
	int getid() {
		return id;
	}
	void display() {
		cout <<"Name     :"<< name << endl;
		cout <<"ID       :"<< id << endl;
		cout <<"Password :"<< password << endl;
	}
};


#pragma once

#include "WithdrawTransaction.h"
#include "time.h"
#include <iostream>
using namespace std;

class Account{
	
protected:
	int createdYear;
	int createdMonth;
	int createdDay;
	double balance;
	WithdrawTransaction *wt;

	void initcurrentTime(){
		time_t timer;
		struct tm t; 

		time(NULL); // 현재 시각을 초 단위로 얻기
		localtime_s(&t, &timer); // 초 단위의 시간을 분리하여 구조체에 넣기

		createdYear = t.tm_year + 1900;
		createdMonth = t.tm_mon + 1;
		createdDay = t.tm_mday;
	}

public:
	
	Account(){
		initcurrentTime();
	}
	Account(double balance){
		initcurrentTime();
		this->balance = balance;
	}
	
	double getBalance() { return balance; }
	void deposit(int money) { this->balance += money; }
	void withdraw(int money) { 
		double temp;
		if((temp = wt->execute(money, balance)) == -1)
			cout << "fail withdraw" << endl;
		else
			balance = temp;
	}
	virtual void toString() = 0;
};
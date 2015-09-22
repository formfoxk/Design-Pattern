#pragma once

#include "Account.h"

class SavingAccount : public Account{
private:
	int finishYear;
	int finishMonth;
	int finishDay;

public: 
	SavingAccount():Account(){
		initcurrentTime();
		wt = new NormalWithdrawTransaction();
	}
	SavingAccount(double balance, int finishYear, int finishMonth, int finishDay):Account(balance){
		this->finishYear = finishYear;
		this->finishMonth = finishMonth;
		this->finishDay = finishDay;
		wt = new NormalWithdrawTransaction();
	}
	void toString(){
		printf("[SavingAccount] CreateDate : %d-%d-%d Balance : %.0f finishDate : %d-%d-%d\n",createdYear, createdMonth, createdDay, balance, finishYear, finishMonth, finishDay);
	}
};
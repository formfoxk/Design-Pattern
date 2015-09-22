#pragma once

#include "Account.h"
#include "MinusWithdrawTransaction.h"

class MinusAccount : public Account{

private:
	double limitedMoney;

public: 
	MinusAccount():Account(){
		this->limitedMoney = limitedMoney;
		wt = new NormalWithdrawTransaction();
	}
	MinusAccount(double balance, double limitedMoney):Account(balance){
		this->limitedMoney = limitedMoney;
		wt = new NormalWithdrawTransaction();
	}
	void toString(){
		printf("[MinusAccount] CreateDate : %d-%d-%d Balance : %.0f LimitedMoney : %.0f\n",createdYear, createdMonth, createdDay, balance, limitedMoney);
	}
};
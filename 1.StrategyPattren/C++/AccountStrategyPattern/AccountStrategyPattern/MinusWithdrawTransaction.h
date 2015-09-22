#pragma once

#include "WithdrawTransaction.h"

class MinusWithdrawTransaction : public WithdrawTransaction{
private:

	double limitedMoney;

public:

	MinusWithdrawTransaction(double limitedMoney){
		this->limitedMoney = limitedMoney;
	}

	double execute(double money, double balance){
		if((balance+limitedMoney) - money > 0)
			return (balance - money);
		return -1;
	}
};
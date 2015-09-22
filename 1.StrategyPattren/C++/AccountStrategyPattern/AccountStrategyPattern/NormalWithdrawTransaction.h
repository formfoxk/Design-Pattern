#pragma once

#include "WithdrawTransaction.h"

class NormalWithdrawTransaction : public WithdrawTransaction{

public:

	double execute(double money, double balance){
		return balance - money;
	}
};
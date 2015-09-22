#pragma once

#include "Account.h"
#include "NormalWithdrawTransaction.h"

class NormalAccount : public Account{
public: 
	NormalAccount():Account(){
		wt = new NormalWithdrawTransaction();
	}
	NormalAccount(double balance):Account(balance){
		wt = new NormalWithdrawTransaction();
	}
	void toString(){
		printf("[NomalAccount] CreateDate : %d-%d-%d Balance : %.0f \n",createdYear, createdMonth, createdDay, balance);
	}
};
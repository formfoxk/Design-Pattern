#pragma once

class WithdrawTransaction{
public:
	virtual double execute(double money, double balance) = 0;
};
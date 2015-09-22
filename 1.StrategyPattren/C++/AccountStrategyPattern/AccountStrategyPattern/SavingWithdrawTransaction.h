#pragma once

#include<time.h>
#include "WithdrawTransaction.h"

class SavingWithdrawTransaction : public WithdrawTransaction{
private:
	int finishYear;
	int finishMonth;
	int finishDay;

	long totalday(int y, int m, int d)
	{
		int months[] = {31,28,31,30,31,30,31,31,30,31,30,31};
		int i;
		long total = 0L;

		total = (y-1)*365L + (y-1)/4-(y-1)/100+(y-1)/400;

		if(!(y%4) && y%100 || !(y%400))
			months[1]++;
		for(i=0; i<m-1; i++)
			total += months[i];

		total +=d;

		return total;
	}

public:
	SavingWithdrawTransaction(int finishYear, int finishMonth, int finishDay){
			this->finishYear = finishYear;
			this->finishMonth = finishMonth;
			this->finishDay = finishDay;
	}

	double execute(double money, double balance){

		time_t timer;
		struct tm t; 

		time(NULL); // 현재 시각을 초 단위로 얻기
		localtime_s(&t, &timer); // 초 단위의 시간을 분리하여 구조체에 넣기
		
		if(totalday(finishYear, finishMonth, finishDay) - totalday(t.tm_year+1900, t.tm_hour+1, t.tm_mday) <=0)
			return (balance - money);
		return -1;


	}
};
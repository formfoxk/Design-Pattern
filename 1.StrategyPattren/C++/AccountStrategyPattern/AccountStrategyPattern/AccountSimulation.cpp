#include "Account.h"
#include "NormalAccount.h"
#include "MinusAccount.h"
#include "SavingAccount.h"

int main(){

	Account *normalAccount = new NormalAccount(50000);
	normalAccount->toString();
	normalAccount->withdraw(40000);
	normalAccount->toString();
	cout << endl;
	
	Account *minusAccount = new MinusAccount(50000, 100000);
	minusAccount->toString();
	minusAccount->withdraw(40000);
	minusAccount->toString();
	minusAccount->withdraw(150000);
	minusAccount->toString();
	cout << endl;
	
	Account *savingAccount = new SavingAccount(50000, 2015, 10, 10);
	savingAccount->toString();
	savingAccount->withdraw(40000);
	savingAccount->toString();

	return 0;
}
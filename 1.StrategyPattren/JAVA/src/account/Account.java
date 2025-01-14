package account;

import java.util.Date;

public abstract class Account {
	protected Date createDate;
	protected double balance = 0;
	protected WithdrawTransaction wt;
	
	public Account(){
		createDate = new Date();
	}
	public Account(double balance){
		this();
		this.balance = balance;
	}
	
	double getBalance() { return balance; }
	void deposit(int money) { this.balance += money; }
	void withdraw(int money) { 
		double temp;
		if((temp = wt.execute(money, balance)) == -1)
			System.err.println("fail withdraw");
		else
			balance = temp;
	}
	abstract public String toString();
}

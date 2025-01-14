package account;

import java.util.Date;

public class SavingAccount extends Account{
	private Date finishDate;
	
	public SavingAccount(Date finishDate){
		super();
		this.finishDate = finishDate;
		wt = new SavingWithdrawTransaction(finishDate);
	}
	public SavingAccount(double balance, Date finishDate){
		super(balance);
		this.finishDate = finishDate;
		wt = new SavingWithdrawTransaction(finishDate);
	}	
	
	public String toString(){
		return "[SavingAccount] CreateDate : " + createDate + " Balance : " + balance + " finishDate : " + finishDate;
	}
}

package account;

public class NomalAccount extends Account{
	public NomalAccount(){
		super();
		wt = new NomalWithdrawTransaction();
	}
	public NomalAccount(double balance){
		super(balance);
		wt = new NomalWithdrawTransaction();
	}
	public String toString(){
		return "[NomalAccount] CreateDate : " + createDate + " Balance : " + balance;
	}
}

package account;

import java.util.Date;

public class SavingWithdrawTransaction implements WithdrawTransaction{

	private Date finishDate;
	
	public SavingWithdrawTransaction(Date finishDate) {
		// TODO Auto-generated constructor stub
		this.finishDate = finishDate;
	}
	
	@Override
	public double execute(double money, double balance) {
		// TODO Auto-generated method stub
		if(finishDate.after(new Date()))
			return (balance - money);
		return -1;
	}

}

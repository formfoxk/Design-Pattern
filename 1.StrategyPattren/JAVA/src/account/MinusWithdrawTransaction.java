package account;

public class MinusWithdrawTransaction implements WithdrawTransaction{

	private double limitedMoney;
	
	public MinusWithdrawTransaction(double limitedMoney) {
		// TODO Auto-generated constructor stub
		this.limitedMoney = limitedMoney;
	}
	
	public double execute(double money, double balance){
		if((balance+limitedMoney) - money > 0)
			return (balance - money);
		return -1;
	}
}

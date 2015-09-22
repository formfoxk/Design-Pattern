package account;

public class NomalWithdrawTransaction implements WithdrawTransaction{

	@Override
	public double execute(double money, double balance) {
		// TODO Auto-generated method stub
		return balance - money;
	}
}

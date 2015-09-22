package account;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

public class AccountSimulation {
	
	@SuppressWarnings("deprecation")
	public static void main(String[] args) throws ParseException{
		Account normalAccount = new NomalAccount(50000);
		System.out.println(normalAccount);
		normalAccount.withdraw(40000);
		System.out.println(normalAccount);
		System.out.println();
		
		Account minusAccount = new MinusAccount(50000, 100000);
		System.out.println(minusAccount);
		minusAccount.withdraw(40000);
		System.out.println(minusAccount);
		minusAccount.withdraw(150000);
		System.out.println(minusAccount);
		System.out.println();
		
		SimpleDateFormat format = new SimpleDateFormat( "yyyy-MM-dd" );
		Date finishDate = format.parse("2015-10-10");
		Account savingAccount = new SavingAccount(50000, finishDate);
		System.out.println(savingAccount);
		savingAccount.withdraw(40000);
		System.out.println(savingAccount);
	}
}

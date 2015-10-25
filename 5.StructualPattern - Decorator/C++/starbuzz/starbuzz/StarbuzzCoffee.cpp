#include <iostream>
#include "Espresso.h"
#include "Mocha.h"
#include "Milk.h"

int main() {
		// Espresso – 기본
		Beverage *beverage1 = new Espresso( ) ;
		cout << beverage1->getDescription() << " $" << beverage1->cost() << endl;
		
		// Espresso + 2 Mochas + 1 Milk – 객체 beverage2 기능의 동적 추가 (확장 )
		Beverage *beverage2 = new Espresso( ) ;
		beverage2 = new Mocha( beverage2 );
		beverage2 = new Mocha( beverage2 );
		beverage2 = new Milk( beverage2 );
		
		// Beverage beverage2 = new Milk(new Mocha(new Mocha( new Espresso())));
		cout << beverage2->getDescription() << " $" << beverage2->cost() << endl;
	
	return 0;
}
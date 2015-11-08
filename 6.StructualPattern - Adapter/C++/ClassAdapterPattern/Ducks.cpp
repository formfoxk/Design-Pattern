#include "Ducks.hpp"

using namespace ObjectAdapter;

void testDuck(Duck* duck) {
	duck->quack();
	duck->fly();
}

int main(int argc, char* argv[]) {
	MallardDuck* duck = new MallardDuck();

	WildTurkey* turkey = new WildTurkey();
	Duck* turkeyAdapter = new TurkeyAdapter();

	std::cout << "The Turkey says..." << std::endl;
	turkey->gobble();
	turkey->fly();

	std::cout << std::endl << "The Duck says..." << std::endl;
	testDuck(duck);

	std::cout << std::endl << "The TurkeyAdapter says..." << std::endl;
	testDuck(turkeyAdapter);

	return 0;
}
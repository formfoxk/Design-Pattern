#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_ADAPTER_MALLARD_DUCK_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_ADAPTER_MALLARD_DUCK_HPP_

#include "Ducks.hpp"

namespace ObjectAdapter {

class MallardDuck : public Duck {
	public: virtual void quack() {
		std::cout << "Quack" << std::endl;
	}
 	public: virtual void fly() {
		std::cout << "I'm flying" << std::endl;
	}
};

} // namespace ObjectAdapter 

#endif
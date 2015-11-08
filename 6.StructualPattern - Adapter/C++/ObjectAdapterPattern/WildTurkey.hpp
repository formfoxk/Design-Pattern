#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_ADAPTER_WILD_TURKEY_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_ADAPTER_WILD_TURKEY_HPP_

#include "Ducks.hpp"

namespace ObjectAdapter {

class WildTurkey : public Turkey{
	public: virtual void gobble() {
		std::cout << "Gobble gobble" << std::endl;
	}
 	public: virtual void fly() {
		std::cout << "I'm flying a short distance" << std::endl;
	}
};

} // namespace ObjectAdapter 

#endif
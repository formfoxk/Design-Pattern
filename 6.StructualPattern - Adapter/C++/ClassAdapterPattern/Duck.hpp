#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_ADAPTER_DUCK_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_ADAPTER_DUCK_HPP_

#include "Ducks.hpp"

namespace ObjectAdapter {

class Duck {
	public: virtual void quack() = 0;
 	public: virtual void fly() = 0;
};

} // namespace ObjectAdapter


#endif
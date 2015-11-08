#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_ADAPTER_TURKEY_ADAPTER_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_ADAPTER_TURKEY_ADAPTER_HPP_

#include "Ducks.hpp"

namespace ObjectAdapter {

	class TurkeyAdapter : public Duck, WildTurkey {

	public: TurkeyAdapter() {}
	public: void quack() {
				gobble();
	}
	public: void fly() {
				for (int i = 0; i < 5; i++) {
					WildTurkey::fly();
				}
	}
	};

} //namespace ObjectAdapter

#endif
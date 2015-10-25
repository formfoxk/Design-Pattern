#pragma once

#include "WindowDecorator.h"

class VSBDecorator : public WindowDecorator{
	
public:

	VSBDecorator(Window *w):WindowDecorator(w){}

	void draw() {
		WindowDecorator::draw(); // Delegation
		
		// 추가 기능 Draw the vertical scrollbar;
	}

	string getDescription() {
		return WindowDecorator::getDescription() // Delegation
				+ ", including vertical scrollbars"; // 추가 기능
	}
};
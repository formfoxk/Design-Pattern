#pragma once

#include "WindowDecorator.h"

class HSBDecorator : public WindowDecorator{
	
public:

	HSBDecorator(WindowDecorator *w):WindowDecorator(w){
	}

	void draw() {
		WindowDecorator::draw(); // Delegation
		
		// 추가 기능 Draw the vertical scrollbar;
	}

	string getDescription() {
		return WindowDecorator::getDescription() // Delegation
				+ ", including horizontal scrollbars"; // 추가 기능
	}
};
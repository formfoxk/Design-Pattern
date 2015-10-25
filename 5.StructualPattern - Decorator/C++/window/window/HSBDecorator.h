#pragma once

#include "WindowDecorator.h"

class HSBDecorator : public WindowDecorator{
	
public:

	HSBDecorator(WindowDecorator *w):WindowDecorator(w){
	}

	void draw() {
		WindowDecorator::draw(); // Delegation
		
		// �߰� ��� Draw the vertical scrollbar;
	}

	string getDescription() {
		return WindowDecorator::getDescription() // Delegation
				+ ", including horizontal scrollbars"; // �߰� ���
	}
};
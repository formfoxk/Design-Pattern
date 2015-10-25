#pragma once

#include "WindowDecorator.h"

class VSBDecorator : public WindowDecorator{
	
public:

	VSBDecorator(Window *w):WindowDecorator(w){}

	void draw() {
		WindowDecorator::draw(); // Delegation
		
		// �߰� ��� Draw the vertical scrollbar;
	}

	string getDescription() {
		return WindowDecorator::getDescription() // Delegation
				+ ", including vertical scrollbars"; // �߰� ���
	}
};
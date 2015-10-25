#pragma once

#include "Window.h"

class WindowDecorator : public Window{
	
private:

	Window *window;

public:

	WindowDecorator(){}
	WindowDecorator(Window *w) {
		window = w;
	}

	void draw() {
		window->draw();
	} // Delegation

	string getDescription() {
		return window->getDescription();
	} // Delegation
};
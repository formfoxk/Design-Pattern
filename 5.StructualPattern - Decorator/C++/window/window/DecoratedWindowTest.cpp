#include <iostream>

#include "SimpleWindow.h"
#include "HSBDecorator.h"
#include "VSBDecorator.h"

int main() {
		
		// Create a decorated Window with horizontal and vertical scrollbars
		Window *window = new HSBDecorator(new VSBDecorator(new SimpleWindow()));
		
		// Print the Window's description
		cout << window->getDescription() << endl;

		return 0;
}
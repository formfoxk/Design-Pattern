package window;

abstract class WindowDecorator implements Window {
	protected Window window;

	public WindowDecorator(Window w) {
		window = w;
	}

	public void draw() {
		window.draw();
	} // Delegation

	public String getDescription() {
		return window.getDescription();
	} // Delegation
}
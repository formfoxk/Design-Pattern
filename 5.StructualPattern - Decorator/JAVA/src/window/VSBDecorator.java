package window;

public class VSBDecorator extends WindowDecorator {
	public VSBDecorator(Window w) {
		super(w);
	}

	public void draw() {
		super.draw(); // Delegation
		
		// 추가 기능 Draw the vertical scrollbar;
	}

	public String getDescription() {
		return super.getDescription() // Delegation
				+ ", including vertical scrollbars"; // 추가 기능
	}
}
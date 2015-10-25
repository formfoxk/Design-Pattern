package window;

public class HSBDecorator extends WindowDecorator {
	public HSBDecorator(Window w) {
		super(w);
	}

	public void draw() {
		super.draw(); // Delegation
		
		// 추가 기능 : Draw the horizontal scrollbar;
	}

	public String getDescription() {
		return super.getDescription() // Delegation
				+ ", including horizontal scrollbars"; // 추가 기능
	}
}
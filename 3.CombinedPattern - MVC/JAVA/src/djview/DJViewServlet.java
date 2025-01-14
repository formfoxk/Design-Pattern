package djview;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class DjViewServlet
 */
@WebServlet("/DJViewServlet")
public class DJViewServlet extends HttpServlet {
	
	private static final long serialVersionUID = 1L;
       
	
	public void init() throws ServletException {
		
		BeatModel beatModel = new BeatModel();
		beatModel.initialize();
		getServletContext().setAttribute("beatModel", beatModel);
	}

    /**
     * @see HttpServlet#HttpServlet()
     */
    public DJViewServlet() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		
		doPost(request, response);
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		
		BeatModel beatModel = 
				(BeatModel)getServletContext().getAttribute("beatModel");

		String bpm = request.getParameter("bpm");
		if (bpm == null) {
			bpm = beatModel.getBPM() + "";
		}

		String set = request.getParameter("set");
		if (set != null) {
			int bpmNumber = 90;
			bpmNumber = Integer.parseInt(bpm);
			beatModel.setBPM(bpmNumber);
		}

		String decrease = request.getParameter("decrease");
		if (decrease != null) {
			beatModel.setBPM(beatModel.getBPM() - 1);
		}
		String increase = request.getParameter("increase");
		if (increase != null) {
			beatModel.setBPM(beatModel.getBPM() + 1);
		}
		String on = request.getParameter("on");
		if (on != null) {
			beatModel.on();
		}
		String off = request.getParameter("off");
		if (off != null) {
			beatModel.off();
		}

		request.setAttribute("beatModel", beatModel);

		RequestDispatcher dispatcher = 
				request.getRequestDispatcher("/djview.jsp");
		dispatcher.forward(request, response);
	}

}

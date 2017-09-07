package todo;

import done.*;

public class ClockMechanics extends Thread{

	private ClockInput input;
	private ClockOutput output;
	private int counter;
	private int hh, mm, ss;
	
	public ClockMechanics(ClockInput i, ClockOutput o) {
		input = i;
		output = o;
		counter = 0;
	}
	
	public void run() {
		while(true) {
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			counter++;
			ss = counter % 60;
			mm = (counter / 60) % 60;
			hh = (counter / 3600) % 24;
			output.showTime(hh*10000+mm*100+ss);

		}
	}
}

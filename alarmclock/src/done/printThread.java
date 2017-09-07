package done;
import se.lth.cs.realtime.semaphore.Semaphore;

/**
 * Main class of alarm-clock application.
 * Constructor providing access to IO.
 * Method start corresponding to main,
 * with closing down done in terminate.
 */
public class printThread extends Thread{

	private ClockInput	input;
	private ClockOutput	output;
	private Semaphore	signal; 
	// Declare thread objects here..

	/**
	 * Create main application and bind attributes to device drivers.
	 * @param i The input from simulator/emulator/hardware.
	 * @param o Dito for output.
	 */
	public printThread(ClockInput i, ClockOutput o) {
		input = i;
		output = o;
		signal = input.getSemaphoreInstance();
	}

	public void run() {
		while(true) {
			signal.take();
			System.out.println("Boink!");
		}
	}
	
}

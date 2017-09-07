package todo;

import done.ClockInput;
import done.ClockOutput;
import se.lth.cs.realtime.semaphore.MutexSem;
import se.lth.cs.realtime.semaphore.Semaphore;

public class TimeSetter extends Thread {

	private ClockInput input;
	private ClockOutput output;
	private int hh, mm, ss;
	private IntWrapper time;
	private MutexSem timeMutex;
	private Semaphore sigMutex;
	private int prevChoice;

	public TimeSetter(ClockInput i, ClockOutput o, MutexSem mutex, IntWrapper time) {
		input = i;
		output = o;
		this.time = time;
		this.timeMutex = mutex;
		this.sigMutex = i.getSemaphoreInstance();
	}

	public void run() {
		while (true) {
			sigMutex.take();
			// executed if user finished time editing
			if (prevChoice == 2 && input.getChoice() == 0) {
				timeMutex.take();
				int displayValue = input.getValue();
				int seconds = ConvertTimeFormat.convertToSeconds(displayValue);
				time.setVal(seconds);
				timeMutex.give();
			}
			prevChoice = input.getChoice();
		}
	}
}

package todo;

import done.ClockInput;
import done.ClockOutput;
import se.lth.cs.realtime.semaphore.MutexSem;

public class TimePoller extends Thread {

	private ClockInput input;
	private ClockOutput output;
	private int hh, mm, ss;
	private IntWrapper time;
	private MutexSem timeMutex;

	public TimePoller(ClockInput i, ClockOutput o, MutexSem mutex, IntWrapper time) {
		input = i;
		output = o;
		this.time = time;
		this.timeMutex = mutex;
	}

	public void run() {
		while (true) {
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}

			timeMutex.take();
			time.increment();
			int currentTime = time.getVal();
			output.showTime(ConvertTimeFormat.convertToHHMMSS(currentTime));
			timeMutex.give();
		}
	}
}

package todo;

import done.ClockInput;
import done.ClockOutput;
import se.lth.cs.realtime.semaphore.MutexSem;

public class AlarmClock {

	private ClockOutput output;

	public AlarmClock(ClockInput i, ClockOutput o) {
		output = o;
	}

	public void start() {
	}
}

package todo;

import done.ClockInput;
import done.ClockOutput;
import se.lth.cs.realtime.semaphore.MutexSem;

/**
 * Main class of alarm-clock application. Constructor providing access to IO.
 * Method start corresponding to main, with closing down done in terminate.
 */
public class AlarmClock {

	private ClockOutput output;
	private TimePoller timePoller;
	private TimeSetter timeSetter;
	// Declare thread objects here..

	/**
	 * Create main application and bind attributes to device drivers.
	 * 
	 * @param i
	 *            The input from simulator/emulator/hardware.
	 * @param o
	 *            Dito for output.
	 */
	public AlarmClock(ClockInput i, ClockOutput o) {
		output = o;
		MutexSem timeMutex = new MutexSem();
		IntWrapper time = new IntWrapper();
		IntWrapper alarmTime = new IntWrapper();
		timePoller = new TimePoller(i, o, timeMutex, time, alarmTime);
		timeSetter = new TimeSetter(i, o, timeMutex, time, alarmTime, timePoller);
	}

	/**
	 * Tell threads to terminate and wait until they are dead.
	 */
	public void terminate() {
		output.console("AlarmClock exit.");
		timePoller.killThread();
		timeSetter.killThread();
	}

	/**
	 * Create thread objects, and start threads
	 */
	public void start() {
		Thread a = new Thread(timePoller);
		a.start();
		timeSetter.start();
	}

}

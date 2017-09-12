package todo;

import done.ClockInput;
import done.ClockOutput;
import se.lth.cs.realtime.semaphore.MutexSem;
import se.lth.cs.realtime.semaphore.Semaphore;

public class TimeSetter extends Thread {

	private ClockInput input;
	private IntWrapper time;
	private IntWrapper alarmTime;
	private MutexSem timeMutex;
	private Semaphore sigMutex;
	private int prevChoice;
	private TimePoller timePoller;
	private boolean running = true;

	public TimeSetter(ClockInput i, ClockOutput o, MutexSem mutex, IntWrapper time, IntWrapper alarmTime, TimePoller timePoller) {
		input = i;
		this.time = time;
		this.alarmTime = alarmTime;
		this.timeMutex = mutex;
		this.sigMutex = i.getSemaphoreInstance();
		this.timePoller = timePoller;
	}

	public void run() {
		while (running) {
			sigMutex.take();
			timePoller.shutDownAlarm();
			// executed if user finished time editing
			if (prevChoice == 2 && input.getChoice() == 0) {
				timeMutex.take();
				int displayValue = input.getValue();
				int seconds = ConvertTimeFormat.convertToSeconds(displayValue);
				time.setVal(seconds);
				timeMutex.give();
			} else if (prevChoice == 1 && input.getChoice() == 0) {
				int displayValue = input.getValue();
				int seconds = ConvertTimeFormat.convertToSeconds(displayValue);
				alarmTime.setVal(seconds);
			}
			prevChoice = input.getChoice();
		}
	}

	public void killThread() {
		running = false;
	}
}

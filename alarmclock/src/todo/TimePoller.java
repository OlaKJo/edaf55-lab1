package todo;

import done.ClockInput;
import done.ClockOutput;
import se.lth.cs.realtime.semaphore.MutexSem;

public class TimePoller implements Runnable {

	private ClockInput input;
	private ClockOutput output;
	private IntWrapper time;
	private IntWrapper alarmTime;
	private MutexSem timeMutex;
	private boolean alarmOn = true;
	private int nbrOfBeeps = 0;
	private boolean running = true;

	public TimePoller(ClockInput i, ClockOutput o, MutexSem mutex, IntWrapper time, IntWrapper alarmTime) {
		input = i;
		output = o;
		this.time = time;
		this.alarmTime = alarmTime;
		this.timeMutex = mutex;
	}

	public void run() {
		while (running) {
			try {
				oneTick();
			} catch (InterruptedException e) {
				e.printStackTrace();
			}

			timeMutex.take();
			time.increment();
			int currentTime = time.getVal();
			output.showTime(ConvertTimeFormat.convertToHHMMSS(currentTime));
			if (checkAlarm() && !alarmOn) {
				alarmOn = true;
			}
			if (input.getAlarmFlag() && alarmOn) {
				output.doAlarm();
				nbrOfBeeps++;
				if (nbrOfBeeps > 19)
					shutDownAlarm();
			}
			timeMutex.give();
		}
	}

	private void oneTick() throws InterruptedException {
		Thread.sleep(1000);
	}

	private boolean checkAlarm() {
		return (time.getVal() == alarmTime.getVal());
	}

	public void shutDownAlarm() {
		alarmOn = false;
		nbrOfBeeps = 0;
	}

	public void killThread() {
		running = false;
	}
}

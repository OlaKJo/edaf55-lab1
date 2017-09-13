package todo;

import done.ClockInput;
import done.ClockOutput;
import se.lth.cs.realtime.semaphore.MutexSem;

public class SharedData {
	private IntWrapper time;
	private IntWrapper alarmTime;
	private MutexSem dataMutex;
	private boolean alarmOn;
	private int nbrOfBeeps;
	private ClockInput input;
	private ClockOutput output;
	private int prevChoice;

	public SharedData(ClockInput input, ClockOutput output) {
		this.input = input;
		this.output = output;
		dataMutex = new MutexSem();
		time = new IntWrapper();
		alarmTime = new IntWrapper();
	}
	
	private void shutDownAlarm() {
		alarmOn = false;
		nbrOfBeeps = 0;
	}
	
	private void increment() {
		time.increment();
	}
	
	private void setTime() {
		int displayValue = input.getValue();
		int seconds = ConvertTimeFormat.convertToSeconds(displayValue);
		time.setVal(seconds);
	}
	
	private void setAlarmTime() {
		int displayValue = input.getValue();
		int seconds = ConvertTimeFormat.convertToSeconds(displayValue);
		alarmTime.setVal(seconds);
	}

	
	private boolean checkAlarm() {
		return (time.getVal() == alarmTime.getVal());
	}
	
	public void handleAlarm() {
		dataMutex.take();
		if (checkAlarm() && !alarmOn) {
			alarmOn = true;
		}
		if (input.getAlarmFlag() && alarmOn) {
			output.doAlarm();
			nbrOfBeeps++;
			if (nbrOfBeeps > 19)
				shutDownAlarm();
		}
		dataMutex.give();
	}

	public void handleTime() {
		dataMutex.take();
		increment();
		output.showTime(ConvertTimeFormat.convertToHHMMSS(time.getVal()));
		dataMutex.give();
	}

	public void HandleInput() {
		dataMutex.take();
		shutDownAlarm();
		// executed if user finished time editing
		if (prevChoice == 2 && input.getChoice() == 0) {
			setTime();
		} else if (prevChoice == 1 && input.getChoice() == 0) {
			setAlarmTime();
		}
		prevChoice = input.getChoice();
		dataMutex.give();
	}

}
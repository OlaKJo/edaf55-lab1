package todo;

public class TimePoller implements Runnable {

	private SharedData data;
	private boolean running = true;
	private long timeAfterOperations;
	private long timeBeforeOperations;

	public TimePoller(SharedData data) {
		this.data = data;
		timeAfterOperations = System.currentTimeMillis();
		timeBeforeOperations = System.currentTimeMillis();
	}

	public void run() {
		while (running) {
			try {
				timeAfterOperations = System.currentTimeMillis();
				long elapsedTime = timeAfterOperations - timeBeforeOperations;
				oneTick((1000 - elapsedTime) < 0 ? 0 : (1000 - elapsedTime));
				timeBeforeOperations = System.currentTimeMillis();
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
	
			data.handleTime();
			data.handleAlarm();
		}
	}

	private void oneTick(long timeToSleep) throws InterruptedException {
		System.out.println(timeToSleep);
		Thread.sleep(timeToSleep);
	}

	public void killThread() {
		running = false;
	}
}

package todo;

import se.lth.cs.realtime.semaphore.Semaphore;

public class TimeSetter extends Thread {

	private Semaphore sigMutex;
	private boolean running = true;
	private SharedData data;

	public TimeSetter(Semaphore sigMutex, SharedData data) {
		this.sigMutex = sigMutex;
		this.data = data;
	}

	public void run() {
		while (running) {
			sigMutex.take();
			data.HandleInput();
		}
	}

	public void killThread() {
		running = false;
	}
}

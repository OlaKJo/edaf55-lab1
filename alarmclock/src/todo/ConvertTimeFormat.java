package todo;

public class ConvertTimeFormat {

	public static int convertToHHMMSS(int f) {
		int ss = f % 60;
		int mm = (f / 60) % 60;
		int hh = (f / 3600) % 24;
		return (hh * 10000 + mm * 100 + ss);
	}
	
	public static int convertToSeconds(int f) {
		int secFromSeconds 	= f%100;
		int secFromMinutes 	= ((f%10000)/100)*60;
		int secFromHours 	= ((f/10000)%24)*3600;
		return secFromSeconds + secFromMinutes + secFromHours;
	}
}

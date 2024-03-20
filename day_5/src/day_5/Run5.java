package day_5;
class thread1 implements Runnable{
	thread1(){
		Thread t4=new Thread(this);
		t4.start();
	}
	public void run() {
		for(int i=0;i<10;i++) {
			System.out.println("from thread1 "+i);
		}
}
}

public class Run5 {
	public static void main(String args[]) {
		new thread1();
		for(int i=0;i<10;i++) {
			System.out.println("Thread main i="+i);
	}
	}
}

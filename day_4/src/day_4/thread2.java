package day_4;
class Thread1 implements Runnable{
	public void run() {
		for (int i=0;i<10;i++) {
			System.out.println("Thread is i="+i);
		}
	}
}
public class thread2 {
	public static void main(String args[]) {
		Thread1 ob=new Thread1();
		Thread t=new Thread(ob);
		t.start();
		for(int i=0;i<10;i++) {
			System.out.println("Thread main i="+i);
		}
	}
}

package day_5;
class Threadf1 implements Runnable{
	public void run() {
		for(int i=0;i<10;i++) {
			System.out.println("from thread1 "+i);
		}
	}
}
class Threadg2 implements Runnable{
	public void run() {
		for(int i=0;i<10;i++) {
			System.out.println("from thread2 "+i);
		}
	}
}
class Threadh3 implements Runnable{
	public void run() {
		for(int i=0;i<10;i++) {
			System.out.println("from thread3 "+i);
		}
	}
}

public class Run_4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Threadf1 ob=new Threadf1();
		
		
		Threadg2 ob1=new Threadg2();
		
		
		Threadh3 ob2=new Threadh3();
		Thread t2=new Thread(ob2);
		Thread t=new Thread(ob);
		Thread t1=new Thread(ob1);
		t.start();
		t1.start();
		t2.start();
		for(int i=0;i<10;i++) {
			System.out.println("Thread main i="+i);

	}

	}
	}

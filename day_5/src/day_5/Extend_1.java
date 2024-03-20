package day_5;
class A1 extends Thread {
	A1(){
	start();
	}
	public void run() {
		for(int i=0;i<10;i++) {
			System.out.println("from thread1 "+i);
		}
	}
}

public class Extend_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		new A1();
		for(int i=0;i<10;i++) {
			System.out.println("from main "+i);
		}
		

	}

}

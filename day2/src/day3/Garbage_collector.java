package day3;

class test1{
	int a,b;
	void input(int x,int y) {
		a=x;
		b=y;
	}
	void disp() {
		System.out.println("The values are "+a+ "and "+b);
	}
}



public class Garbage_collector {

	public Garbage_collector() {
		// TODO Auto-generated constructor stub
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
			test1 ob1=new test1();
			test1 ob2=new test1();
			ob1.input(5565,650);
			ob2.input(1200,400 );
			ob2=ob1;
			ob1.disp();
			ob2.disp();
	}

}

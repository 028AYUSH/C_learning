package day2;

class constructor1{
	int a;
	int b;
	int c;
	constructor1(int x,int y){
		a=x;
		b=y;
		c=a+b;
	}
	void disp() {
		System.out.println("the value are "+a+" "+b);
		System.out.println("the sum is "+c);
	}
}

public class question3 {

	public question3() {
		// TODO Auto-generated constructor stub
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		constructor1 ob=new constructor1(200,700);
		ob.disp();

	}

	

}

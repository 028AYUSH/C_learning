package day2;

class input{
	int a;
	int b;
	int c;
	void put(int x,int y) {
		a=x;
		b=y;
		c=a+b;
	}
	
	void disp() {
		System.out.println("the value are "+a+" "+b);
		System.out.println("the sum is "+c);
	}
}

public class question2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		input ob=new input();
		input ob2=new input();
		ob.put(20,40);
		ob2.put(200,400);
		ob.disp();
		ob2.disp();
		

	}

}

package practice;

class test1{
	int a=10;
	int b=20;

void disp() {
	System.out.println("the value are "+a+" "+b);
}
void calculate() {
	int c=a+b;
	System.out.println("the sum is "+c);
}
}

public class day2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		test1 ob=new test1();
		ob.disp();
		ob.calculate();
		

	}

}

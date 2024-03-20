package day2;
class parent{
	int a=15,b=30;
	void display() {
		int c=a+b;
		System.out.println(c);
	}
}
class child extends parent{
	void display() {
		super.display();
		int d=a*b;
		System.out.println(d);
	}
}

public class method_overriding {

	public method_overriding() {
		// TODO Auto-generated constructor stub
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		child ob=new child();
		ob.display();

	}

}

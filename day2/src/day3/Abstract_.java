package day3;

abstract class Parent{
	abstract void display1();
	void display2() {
		System.out.println("testing for abstract class");
	}
}

class child extends Parent{
	void display1() {
		System.out.println("the body is provided by child class");
	}
	void display3() {
		System.out.println("Child");
	}
}

public class Abstract_ {

	public Abstract_() {
		// TODO Auto-generated constructor stub
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		child obj=new child();
		obj.display1();
		obj.display2();
		obj.display3();

	}

}

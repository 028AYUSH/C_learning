package practice;

public class B {
	{
		System.out.println("IIB");
	}
	static {
		new B();
		System.out.println("SIB");
		new B();
	}
	public static void main(String[] args) {
		System.out.println("from main");
	}

}

package day2;

class E{
	int a=50;
}
class F extends E{
	int a=20;
	void disp(){
		System.out.println(a);
		System.out.println(super.a);
	}
}

public class Variable_OR {

	public Variable_OR() {
		// TODO Auto-generated constructor stub
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		F ob=new F();
		ob.disp();

	}

}

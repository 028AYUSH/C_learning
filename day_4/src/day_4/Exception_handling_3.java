package day_4;

class Throwing{
	void check(String s1) {
		// TODO Auto-generated method stub
		char ch;
		ch=s1.charAt(0);
		if(ch=='A') {
			System.out.println("valid id");
		}
		else {
			try {
				throw new
				ArithmeticException();
			}
			catch(ArithmeticException e) {
				System.out.println("Invalid id");
			}
		}
	}
	
}



public class Exception_handling_3 {

	public static void main(String args[]) {
		// TODO Auto-generated method stub
		Throwing ob=new Throwing();
		ob.check("ayush");
	}

}

package day_4;
@SuppressWarnings("serial")
class nomatch extends Exception{
	
}
class Throwag{
	void check(String s1)throws nomatch {
		char ch;
		ch=s1.charAt(0);
		if(ch=='M') {
			System.out.println("valid ID");
		}
		else {
			throw new nomatch();
		}
	}
}

public class Own_Exception {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Throwag ob=new Throwag();
		try {
			ob.check("Monkey");
			
		}
		catch(nomatch e) {
			System.out.println("Invalid ID");
		}
		finally {
			System.out.println("thanks");
		}

	}

}

package day_4;

public class Exception_Handling_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int x=12;
		int y=3;
		int p[]= {10,4,6,2};
		try
		{
			int z=x/y;
			System.out.println(z);
			p[17]=10;
			
		}
		catch(ArithmeticException e) {
			System.out.println("sorry but u fuc**d up bi*ch");
		}
		catch(Exception e) {
			System.out.println(e);
		}


	}

}

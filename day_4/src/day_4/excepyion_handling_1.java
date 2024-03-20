package day_4;


public class excepyion_handling_1 {

	public static void main(String[] args) {
		int x=12;
		int y=2;
		// TODO Auto-generated method stub
		try
		{
			int z=x/y;
			System.out.println("the result is "+z);
		}
		catch(ArithmeticException e) {
			System.out.println("sorry but u fuc**d up bi*ch");
		}
		finally{
			System.out.println("ram aam khata hai");
		}
	}

}

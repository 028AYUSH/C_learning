package day_4;

import java.io.DataInputStream;

public class Throws {
	@SuppressWarnings("deprecation")
	public static void main(String argd[])throws  Exception {
		DataInputStream ds=new
				DataInputStream(System.in);
		System.out.println("Input 3 no.s");
		int
		a=Integer.parseInt(ds.readLine());
	
		float
		b=Float.parseFloat(ds.readLine());
		double
		c=Double.parseDouble(ds.readLine());
		System.out.println("enter a string");
		String ch=ds.readLine();
		System.out.println("string="+ch);
		System.out.println("3 nos. "+a+" "+b+" "+c);
	}

}

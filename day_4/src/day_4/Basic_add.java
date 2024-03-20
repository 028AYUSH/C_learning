package day_4;

import java.io.DataInputStream;
import java.io.IOException;

class eve{
	int add(int a,int b,int c) {
		int p=a;
		int q=b;
		int r=c;
		int z=p+q+r;
		
		
		return z;
		
		
	}
	int avg(int a,int b,int c) {
		
		int f=(a+b+c)/3;
		
		
		return f;
		
	}
	void display(int z,int f) {
		System.out.println("sum = "+z+" average = "+f);
	}
}

public class Basic_add {

	@SuppressWarnings("deprecation")
	public static void main(String[] args) throws  IOException {
		// TODO Auto-generated method stub
		DataInputStream ds=new
				DataInputStream(System.in);
		System.out.println("Input 3 no.s");
		int
		a=Integer.parseInt(ds.readLine());
	
		int
		b=Integer.parseInt(ds.readLine());
		int
		c=Integer.parseInt(ds.readLine());
		eve obj=new eve();
		int z=obj.add(a,b,c);
		int f=obj.avg(a, b, c);
		obj.display(z, f);
	}

}

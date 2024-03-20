/**
 * 
 */
package cw.java;

/**
 * 
 */
import java.util.Scanner;
public class question1 {

	/**
	 * @param args
	 */
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		try (Scanner sc = new Scanner(System.in)) {
			System.out.print("Enter number : ");
			int n=sc.nextInt();
			int c=0;
			int sum=0,j,ans=0;
			for(int i=n;i>0;i=i/10)
			{
				c++;
				j=i%10;
				sum+=j;
				ans=ans*10+i%10;
				
}
			System.out.println("The count is "+c+" the sum of digits is "+sum+
					" the reverse number is "+ans);
		}
		

}
}

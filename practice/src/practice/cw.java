package practice;

import java.util.Scanner;

public class cw {
	public static void main(String[] args) {
		@SuppressWarnings("resource")
		Scanner sc= new Scanner(System.in);
		int x1 = sc.nextInt();
		int x2 = sc.nextInt();
		int x3 = x1 + x2;
		System.out.println("the sum is : "+x3);
	}
}

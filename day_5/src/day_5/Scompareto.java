package day_5;

public class Scompareto {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String str1="strings are immutable";
		String str2="strings are immutable";
		String str3="strings are not immutable";
		int result=str1.compareTo(str2);
		System.out.println(result);
		result=str1.compareTo(str3);
		System.out.println(result);
	}

}

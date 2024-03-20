package day_5;

public class Sstartswith {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String str3="strings are not immutable";
		boolean retval;
		retval=str3.startsWith("strings");
		System.out.println(retval);
		retval=str3.startsWith("sgnirts");
		System.out.println(retval);

	}

}

package day_5;

public class Sendswith {
	public static void main(String[] args) {
		String str3="strings are not immutable";
		boolean retval;
		retval=str3.endsWith("immutable");
		System.out.println(retval);
		retval=str3.endsWith("immu");
		System.out.println(retval);
	}

}

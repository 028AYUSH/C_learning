package day2;
class rob{
	int i=100;
	int j=500;
}
class bor extends  rob{
	int c=i+j;
	void disp() {
		System.out.println(c);
	}
}
class cor extends rob{
	int d=i*j;
	void displ() {
		System.out.println(d);
	}
	
}

public class multiple_inheritance {

	

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		cor obj=new cor();
		bor obj1=new bor();
		obj.displ();
		obj1.disp();

	}

}

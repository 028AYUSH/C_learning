package day2;

class tx{
	int a;
	int b;
	int c;
	tx(int x){
		
		c=x/6;
		
	}
	tx(int x,int y){
		c=(x+y)/6;
		
	}
	void point() {
		System.out.println(c);
	}
}

public class constructoroverloading {

	public constructoroverloading() {
		// TODO Auto-generated constructor stub
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		tx points=new tx(60);
		tx points1=new tx(60,40);
		points.point();
		points1.point();

	}

}

package program_16.java;

public class DynamicPolymorphism {
	public static void main(String[] args)
	{
		Vehicle vh=new Car();
		vh.move(); 
		vh=new Vehicle();
		vh.move();
		System.out.print("Harmehar Kaur[CSE-1,04613202720]");
	}
}
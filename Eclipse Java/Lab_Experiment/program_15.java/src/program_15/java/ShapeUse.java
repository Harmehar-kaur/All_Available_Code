package program_15.java;

public class ShapeUse {
	public static void main(String args[ ])
	{
		Trapezoid tz=new Trapezoid();
		Triangle tr=new Triangle();
		Hexagon hx=new Hexagon();
		
		Shape s;	
		
		s=tz;
		s.numberOfSides();
		s=tr;
		s.numberOfSides();
		s=hx;
		s.numberOfSides();
		System.out.print("Harmehar Kaur[CSE-1,04613202720]");
	}
}
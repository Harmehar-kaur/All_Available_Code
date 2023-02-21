package program_7.java;

public class ConstructorOverloadingUse {

	public static void main(String[] args) {
		ConstructorOverloading object1= new ConstructorOverloading();
		ConstructorOverloading object2= new ConstructorOverloading(20);
		ConstructorOverloading object3= new ConstructorOverloading(40,20);
		
		
		int area= object1.areaoftherectangle();
		System.out.println("Area of object1: " + area );
		area = object2.areaoftherectangle();
		System.out.println("Area of object2: " + area );
		area = object3.areaoftherectangle();
		System.out.println("Area of object3: " + area );
		System.out.print("Harmehar Kaur[CSE-1,04613202720]");
	}

}

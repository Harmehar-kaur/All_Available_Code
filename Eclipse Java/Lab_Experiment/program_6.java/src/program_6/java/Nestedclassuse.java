package program_6.java;



public class Nestedclassuse {

	public static void main(String[] args) {
		Nestedclass.StaticNestedClass o1= new Nestedclass.StaticNestedClass();
	
		o1.show();
		
		Nestedclass object = new Nestedclass(); 
		Nestedclass.NonStaticNestedClass o2= object.new NonStaticNestedClass();
		
		o2.display();
		System.out.print("Harmehar Kaur[CSE-1,04613202720]");
		

	}

}

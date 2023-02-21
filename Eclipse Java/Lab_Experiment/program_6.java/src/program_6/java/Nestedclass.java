package program_6.java;

//oc = outerclass
public class Nestedclass {
	static double oc_x = 3.14;
	double oc_y = 2.13;
	private static double oc_z = 7.44;
	
	public class NonStaticNestedClass
    {
        void display()
        {
        	System.out.println("\n This is a non-static inner class" );
        	
            System.out.println("outer_x = " + oc_x);
           
            System.out.println("outer_private = " + oc_z);
             
            System.out.println("outer_y = " + oc_y);
        }
    }
	
	static class StaticNestedClass{
		void show() {
			System.out.println("\n This is a static nested class");
			
			System.out.println("outer_x = " + oc_x);
	           
            System.out.println("outer_private = " + oc_z);
             
            System.out.println("outer_y cannot be directly accessed by the static nested class");
		}
	}
}
	


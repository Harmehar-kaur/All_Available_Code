package program_5.java;

import java.util.*;

class quadraticequation {
	double a,b,c,d;
	double r1, r2;
	
	
   public void input() {
	  System.out.println("Enter the constants");
	  Scanner s =new Scanner(System.in);
	  a=s.nextDouble();
	  b=s.nextDouble();
	  c=s.nextDouble();
	  System.out.println("The equation is: "+a+"x^2"+b+"x"+c+"=0");
	  double bs =Math.pow(b, 2);
	  d = bs-4*a*c;
	  
   }
   public void rootevaluation() {
	   if (d>0) {
		   r1=(-b+Math.sqrt(d)/(2*a));
		   r2=(-b-Math.sqrt(d)/(2*a));
		   System.out.printf("root1=%.2f, root2=%.2f",r1,r2);
	   }else if(d==0) {
		   r1=r2=(-b/(2*a));
		   System.out.format("root1=root2=%.2f",r1);
	   }else {
		   double real= (-b/(2*a));
		   double imaginary= (Math.sqrt(d)/(2*a));
		   System.out.format("root1= %.2f + %.2fi" ,real, imaginary);
		   System.out.format("root1= %.2f - %.2fi" ,real, imaginary);
	   }
   }
	

}

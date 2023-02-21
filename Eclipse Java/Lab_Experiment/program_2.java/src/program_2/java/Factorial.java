package program_2.java;

import java.util.Scanner;

public class Factorial {
	public static int fact(int number) {
		if (number==1) {
			return 1;
		}else {
			return fact(number-1)*number;
		}
		
	}
	public static void main(String[] args){
	System.out.println("Enter the number: ");
	Scanner s = new Scanner(System.in);
	int number = s.nextInt();
	System.out.println("Factorial of "+ number +" is: "+ fact(number));
	System.out.print("Harmehar Kaur[CSE-1,04613202720]");
	}
}	
	
	
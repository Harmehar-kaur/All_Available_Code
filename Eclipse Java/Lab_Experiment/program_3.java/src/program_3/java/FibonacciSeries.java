package program_3.java;

import java.util.Scanner;

public class FibonacciSeries {
	public static void main(String[] args) {
		int first = 0, second = 1;
		System.out.print("Enter the number of terms of the series to be printed: ");
		Scanner input = new Scanner(System.in);
		int last = input.nextInt(); 
		System.out.print(first+ " " + second);
		for(int i=2;i<last;++i)//loop starts from 2 because 0 and 1 are already printed    
		 {    
		  int newelement = first + second ;    
		  System.out.print(" "+newelement);    
		  first=second;    
		  second=newelement;    
		 }    
		        
	System.out.println("\nHarmehar Kaur[CSE-1,04613202720]");
	}
		
}






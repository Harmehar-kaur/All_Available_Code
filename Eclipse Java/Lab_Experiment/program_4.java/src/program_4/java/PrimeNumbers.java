package program_4.java;

import java.util.Scanner;

public class PrimeNumbers {
	public static void main(String[] args) {
	 System.out.println("Enter the number before which prime numbers are to be printed: ");
	 Scanner input = new Scanner(System.in);
     int n = input.nextInt();
     System.out.println("Prime numbers till " + n + " are: ");
     for(int num = 1; num<=n; num++)
		{
		    int count = 0;
		    for(int i=2; i<=num/2; i++)
			 {
		        if(num%i==0){
		         count++;
		         break;
		      	}
		   	 }if(count==0 && num!= 1)
		      		System.out.println(num + " ");
		 }
     System.out.println("\nHarmehar Kaur[CSE-1,04613202720]");
	}
}



package program_11.java;
import java.util.Scanner; 
public class PrintPrimeNumber {
	public static void main(String[] args){
	Scanner s = new Scanner(System.in);
	System.out.print("Enter the number until which you want to print prime number ");
	int num = s.nextInt();
	for (int i = 2; i <= num; i++) 
	{
	int isPrime = 0;
    for (int j = 2; j <= i / 2; j++) 
	{
		if (i % j == 0) 
		{
		 isPrime = 1;
		 break;
	    }
	}
    if (isPrime == 0)
	System.out.println(i + " ");
	}
	System.out.print("Harmehar Kaur[CSE-1,04613202720]");
   }
}


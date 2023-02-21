package program_13.java;
import java.util.Scanner; 
public class SortTheNames {
	public static void main(String[] args) 
    {
        int n;
        String temp;
        Scanner s = new Scanner(System.in);
        System.out.print("Enter number of names you want to enter:");
        n = s.nextInt();
        String names[] = new String[n];
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter all the names:");
        for(int i = 0; i < n; i++)
        {
            names[i] = sc.nextLine();
        }
        for (int i = 0; i < n; i++) 
        {
            for (int j = i + 1; j < n; j++) 
            {
                if (names[i].compareTo(names[j])>0) 
                {
                    temp = names[i];
                    names[i] = names[j];
                    names[j] = temp;
                }
            }
        }
        System.out.print("\n Names in Alphabetical Order: \n");
        for (int i = 0; i < n - 1; i++) 
        {
            System.out.println(names[i]);
        }
        System.out.println(names[n - 1]);
        System.out.println("Harmehar Kaur[CSE-1,04613202720]");
    }
}
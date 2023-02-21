package program_9.java;

import java.util.Scanner;

public class StudentGrade {

	public static void main(String[] args) {
		int sno,percent,avg,grade,sum=0;
		Scanner s =new Scanner(System.in);
		System.out.println("Enter The number of students: ");
		sno = s.nextInt();
		for (int i = 1;i<(sno+1);i++) {
			System.out.println("For student "+ i);
			System.out.println("Enter the marks of 5 subject: ");
			for (int j=1;j<6;j++) {
				System.out.println("Enter the marks of subject"+j);
				int marks=s.nextInt();
				sum= sum + marks;
			}
			avg = sum/5;
			System.out.println("The average for student "+ i + " is " + avg);
			System.out.println("The percentage for student "+ i + " is " + avg + "%.");
			if(avg>=90) {
				System.out.println("The grade of the student is A.");
			}else if(avg<90&&avg>70) {
				System.out.println("The grade of the student is B.");
			}else {
				System.out.println("The grad assigned is C. Needs improvement.");
			}
			
		}
		System.out.print("Harmehar Kaur[CSE-1,04613202720]");
	}

}

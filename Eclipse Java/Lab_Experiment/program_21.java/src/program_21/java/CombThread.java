package program_21.java;

public class CombThread {
	public static void main(String[] args)
	{
		One t1=new One();
		Two t2=new Two();
		Three tt=new Three();
		Thread t3=new Thread(tt);
			t1.setName("One");
			t2.setName("Two");
			t3.setName("Three");
		System.out.println(t1);
		System.out.println(t2);
		System.out.println(t3);
			Thread t=Thread.currentThread();
			System.out.println(t);
			t1.start();
			t2.start();
			t3.start();
	}
}
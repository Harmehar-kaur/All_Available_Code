package program_18.java;
public class TwoThreads {
	public static void main(String[] args) 
	{
		Runnable r = new Runnable1();
		Thread t1 = new Thread(r);
		t1.start();
		Runnable r2 = new Runnable2();
		Thread t2 = new Thread(r2);
		t2.start();
	}
}
class Runnable2 implements Runnable
{
	public void run()
	{
		for(int i=0;i<11;i+=2) 
		{
			System.out.println(i);
		}
	}
}
class Runnable1 implements Runnable
{
	public void run()
	{
		for(int i=1;i<=11;i+=2) 
		{
			System.out.println(i);
		}

	}
}
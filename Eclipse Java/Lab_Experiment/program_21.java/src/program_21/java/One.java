package program_21.java;

public class One extends Thread{
	public void run()
	{
		for(int i=0;i<10;i++)
		{
			try{
				Thread.sleep(1000); }
			catch(InterruptedException e)
			{
				System.out.println(e); 
			}
			System.out.println("Good Morning");
		}
	}
}
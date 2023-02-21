package program_21.java;
public class Two extends Thread
{
	public void run()
	{
		for(int i=0;i<10;i++)
		{
			try{
			Thread.sleep(2000); }
			catch(InterruptedException e)
			{
				System.out.println(e);
			}
				System.out.println("Hello ");
		}
	}
}
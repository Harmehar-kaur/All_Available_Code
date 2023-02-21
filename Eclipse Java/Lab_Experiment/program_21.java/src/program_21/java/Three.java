package program_21.java;
class Three implements Runnable
{
	public void run()
	{
		for(int i=0;i<10;i++)
		{
			try{
			Thread.sleep(3000); }
			catch(InterruptedException e)
			{
				System.out.println(e); 
			}
				System.out.println("Welcome");
		}
	}
}
package program_19.java;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
public class CustomException {
	public static void main(String[] main)
	{
        FileInputStream myFile;
        try 
	  {
        	myFile = new FileInputStream("C:\\Coding\\Mycode\\java1.txt");
        }catch (FileNotFoundException e) 
		  {
              	try{
                		throw new FileException("PLease check File Name or path", e);
            	   }catch(Exception fileE)
				{
					fileE.getMessage();
                			fileE.printStackTrace();
            		}
       	  }
	}
}

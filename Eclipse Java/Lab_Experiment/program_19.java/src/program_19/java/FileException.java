package program_19.java;
public class FileException extends Exception{
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	FileException(String message, Throwable th)
	{
        	super(message,th);
    }
}

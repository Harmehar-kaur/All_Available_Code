package roughwork;

import java.net.URL;
import java.net.URLConnection;
import java.util.Scanner;
import  java.io.IOException;
import java.net.MalformedURLException;
import java.util.Date;
 
public class URLInfo 
{
    public static void main(String[] args) throws IOException , MalformedURLException
    {
        Scanner sc = new Scanner(System.in);
 
        System.out.print("Enter any Url: ");
        String ad = sc.nextLine();
 
        URL url = new URL(ad);
        URLConnection uc = url.openConnection();
 
        System.out.println("Date:"+ new Date(uc.getDate()) );
        System.out.println("Content Type: "+ uc.getContentType());
        System.out.println("Content Length: "+ uc.getContentLength());
         
    }
}

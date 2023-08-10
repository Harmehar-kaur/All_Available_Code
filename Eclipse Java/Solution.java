import java.util.Scanner;
public class Solution {
    static int secretCode(int n, int []a) {
        // Write your code here.
        int result = 0; 
        for(int i =0;i<=n; i++){
            int secretSum = a[i]+a[i+1]+a[i+2];
            if (secretSum%10==0){
                result = 1;  
            }
            else{
               result = 0; 
            }    
        }
        return result; 
    }
    public static void main(String[] args){
        int N;
        Scanner s = new Scanner(System.in);
        int testCases = s.nextInt();
        for(int i=0;i<=testCases;i++){
            N = s.nextInt();
            int[] a = new int[N];
            for(int j=0;j<=N;j++ ){
                a[i] = s.nextInt();
            }
            secretCode(N,a); 
        }

    }
}
    


import java.util.*; 
public class technical {
 public static void main(String [] args){
    int i; 
    int smallest = Integer.MAX_VALUE;
    int secondSmallest = Integer.MAX_VALUE; 
    int [] arr ={1, 2 , 3, 4,5, 6, 7, 8, 9, 10};
    for(i:arr){
        if(i < smallest){
            secondSmallest = smallest;
            smallest = i; 
        }else if(i < secondSmallest && i != smallest){
            secondSmallest = i; 
        }
    }
   
}
}
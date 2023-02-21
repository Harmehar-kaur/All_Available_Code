package program_8.java;

public class Stacks {
	    private int data[];
	    private int topIndex;  //Index of the top most element of the stack

	    public Stacks(int size){
	        data= new int[size];
	        topIndex=-1;
	    }

	    public Stacks(){
	        data= new int[10];
	        topIndex=-1;
	    }

	    //O(1)
	    public int size(){
	        return topIndex+1;

	    }
	    
	    //O(1)
	    public boolean isEmpty(){

	          return topIndex == -1;
	    }
	    
	    //O(1);
	    public void push(int elem) {
	          //If stack is full
	          if(topIndex==data.length-1){
	              doubleCapacity();
	          }
	          topIndex++;
	          data[topIndex]= elem;
	          System.out.printf("\nThe element %d is pushed.",elem);
	    }
	    private void doubleCapacity(){
	    	int temp[]= data;
	        data= new int [2 * temp.length];
	        for(int i=1;i<temp.length;i++){
	            data[i]= temp[i];
	        }

	    }

	    //O(1)
	    public int top() throws StackEmptyException{
	      if(topIndex==-1){
	        //Throw stack empty exception
	        throw new StackEmptyException();
	      }
	        return data[topIndex];

	    }
	    //O(1)
	    public int pop() throws StackEmptyException{

	        if(topIndex==-1){
	            throw new StackEmptyException();
	        }
	        int temp = data[topIndex];
	        topIndex--;
	        return temp;
	    }


	}
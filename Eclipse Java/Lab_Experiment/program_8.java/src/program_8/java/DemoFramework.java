package program_8.java;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;

public class DemoFramework {
	public static void main(String[]args) {
	Stack<Integer> stack = new Stack<Integer>();
	System.out.println("The element pushed is:"+stack.push(10)); 
	System.out.println("The element pushed is:"+stack.push(20));
	System.out.println("The element pushed is:"+stack.push(30));
	
	System.out.println("The element searched is at index:" +stack.search(10));
	System.out.println("The stack is full:" +stack.empty());
	System.out.println("The element at the top index is:" + stack.peek());
	System.out.println("The element popped is: " + stack.pop());
	
	
     Queue<Integer> queue= new LinkedList<>();
     System.out.println("The queue is implemented below.");
     System.out.println("Enqueue operation: "+queue.add(15));
     System.out.println("Enqueue operation: " +queue.add(25));
     System.out.println("Enqueue operation: " + queue.add(35));
     System.out.println("Peek Method result:" + queue.peek());
     System.out.println("Poll method result:" + queue.poll());
     System.out.println("Element method result:" + queue.element());
     System.out.println("Remove method result:" + queue.remove());
     System.out.print("Harmehar Kaur[CSE-1,04613202720]");
     
    }
}


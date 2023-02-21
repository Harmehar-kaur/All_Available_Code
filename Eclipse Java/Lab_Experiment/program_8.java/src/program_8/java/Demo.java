package program_8.java;

public class Demo {
	public static void main(String[] args) throws StackEmptyException, QueueEmptyException {
		Stacks stack= new Stacks();
		stack.push(10);
		stack.push(20);
		stack.push(30);
		System.out.println("\nThe element at the top index is:" + stack.top());
        System.out.println("The element popped is :" + stack.pop());
        System.out.println("The size of the stack is:" + stack.size());
        System.out.println("The stack is full: "+stack.isEmpty());
        Queues<Integer> queue = new Queues<>();
        queue.enqueue(15);
        queue.enqueue(25);
        queue.enqueue(35);
        System.out.println("\nThe element at the front of the queue is:" + queue.front());
        System.out.println("The size of the stack is:"+ queue.size());
        System.out.println("The element deleted from the queue is: "+queue.dequeue());
        System.out.println("The queue is full: "+queue.isEmpty());
        System.out.print("Harmehar Kaur[CSE-1,04613202720]");
	}

}

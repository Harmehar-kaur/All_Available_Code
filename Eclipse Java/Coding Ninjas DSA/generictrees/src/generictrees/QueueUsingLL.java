package generictrees;

public class QueueUsingLL<T> {
	
	    private Node<T> front;
	    private Node<T> rear;
	    private int size;

	    public QueueUsingLL() {
	        front = null;
	        rear = null;
	        size = 0;

	    }

	    // O(1)
	    public int size() {
	        return size;

	    }

	    public boolean isEmpty() {
	        return size == 0;
	    }

	    public void enqueue(T elem) {
	        Node<T> newNode = new Node<T>(elem);
	        size++;
	        if (rear == null) {
	            front = newNode;
	            rear = newNode;
	        } else {
	            rear.next = newNode;
	            rear = newNode;

	        }
	    }

	    public T front() throws QueueEmptyException {
	        if (size == 0) {
	            throw new QueueEmptyException();
	        }
	        return front.data;

	    }

	    public T dequeue() {
	        T temp=front.data;
	        front=front.next;
	        if(front==null){
	            rear=null;
	        }
	        size--;
	        return temp;

	    }
	}




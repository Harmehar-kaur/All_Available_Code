package program_20.java;
public class ProducerConsumerTest {
	public static void main(String[] args) {
		Shop s = new Shop();
		Producer p1 = new Producer(s, 1);
		Consumer c1 = new Consumer(s, 1);
		p1.start(); 
		c1.start();
		System.out.print("Harmehar Kaur[CSE-1,04613202720]");
	}
}

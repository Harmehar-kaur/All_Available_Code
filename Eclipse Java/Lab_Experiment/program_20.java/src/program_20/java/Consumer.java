package program_20.java;
public class Consumer extends Thread{
	private Shop Shop;
	private int number;
	public Consumer(Shop s, int number) {
		Shop = s;
		this.number = number;
	}
	public void run() {
		int value = 0;
		for (int i = 0; i < 10; i++) {
			value = Shop.get();
			System.out.println("Consumer #" + this.number + " got: " + value);
		}
	}
}
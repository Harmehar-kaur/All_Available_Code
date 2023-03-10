package program_20.java;
public class Producer extends Thread{
	private Shop Shop;
	   private int number;
	   public Producer(Shop s, int number) {
	      Shop = s;
	      this.number = number;
	   } 
	   public void run() {
	      for (int i = 0; i < 10; i++) {
	         Shop.put(i);
	         System.out.println("Producer #" + this.number + " put: " + i);
	         try {
	            sleep((int)(Math.random() * 100));
	         } catch (InterruptedException e) { }
	      } 
	   }
}

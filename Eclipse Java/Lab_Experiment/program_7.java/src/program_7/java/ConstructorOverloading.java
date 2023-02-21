package program_7.java;

public class ConstructorOverloading {
	int length , breadth ;
	
	public ConstructorOverloading() {
		length = 10;
		breadth = 10;
	}
	
     public ConstructorOverloading(int length){
        this.length = length;
        breadth = 10; 
		
	}
     public ConstructorOverloading(int length , int breadth) {
    	 this.breadth=breadth; 
    	 this.length=length; 
     }
     
     public int areaoftherectangle() {
    	 return length*breadth;
     }
}
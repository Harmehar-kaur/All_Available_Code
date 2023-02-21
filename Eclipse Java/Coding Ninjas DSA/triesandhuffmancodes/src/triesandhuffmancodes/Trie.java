package triesandhuffmancodes;

public class Trie {
	  private TrieNode root;
	  public Trie() {
	    root = new TrieNode('\0');
	  }
	  private void addHelper(TrieNode root,String word) {
	     if(word.length()==0) {
	    	 root.isTerminal=true; 
	    	 return; 
	     }
	     int childindex=word.charAt(0)-'A';
	     TrieNode child = root.children[childindex];
			if(child == null){
				child = new TrieNode(word.charAt(0));
				root.children[childindex] = child;
				root.childcount++;
			}
			addHelper(child, word.substring(1));
		}
	    
	  public void add(String word) {
		  addHelper(root,word);
	  }
	  
	  private boolean searchHelper(TrieNode root, String word) {
		  if(word.length() == 0){
	            return root.isTerminal ;
	        }
	        int childIndex = word.charAt(0) - 'A';
	        TrieNode child = root.children[childIndex];
	        if(child == null){
	            return false; 
	        }
	        return searchHelper(child, word.substring(1));
		
		  
	  }
	   public boolean search(String word) {
	        return searchHelper(root,word);
	    }
	    
	   private void deleteHelper(TrieNode root, String word) {
		   if(word.length() == 0){
	             root.isTerminal=false;
	             return ;
		   }
		   int childIndex = word.charAt(0) - 'A';
	        TrieNode child = root.children[childIndex];
	        if(child == null){
	            return; 
	        }
	        deleteHelper(child,word.substring(1));
	        if(!child.isTerminal && child.childcount==0) {
	        	root.children[childIndex]= null;
	        	root.childcount--;
	        }

	   }
	    public void delete(String word) {
	    	deleteHelper(root,word);
	    }
	        
}


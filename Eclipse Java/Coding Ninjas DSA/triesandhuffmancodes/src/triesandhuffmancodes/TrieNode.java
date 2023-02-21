package triesandhuffmancodes;

public class TrieNode {
	char data;
    boolean isTerminal; 
    int childcount; 
    TrieNode[] children;
    
    public TrieNode(char data) 
    {
        this.data=data; 
        this.isTerminal=false;
        this.children=new TrieNode[26];
        this.childcount=0;
    }
}

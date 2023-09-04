package LinkTree;  

import java.util.ArrayList;

class TreeNode <T>{
    T data;
    ArrayList<TreeNode<T>> children;
    ArrayList<TreeNode<T>> next;
    public GenericTreeNode(data){
        this.data = data; //Node data
        children = new ArrayList<>(); //List of children nodes
    }
    public void printTree(TreeNode root){
        //Not a base case but an edge case
        if (root == null){
            return; 
        }
        System.out.println(root.data); //Print current node's data
        for (TreeNode child : root.children){
            printTree(child); //Recursively call the function for children
        }
    }

    public TreeNode takeTreeInput(){
        System.out.println("Enter root Data");
        int rootData = s.nextInt(); //TAKE USER INPUT
        //Stop taking inputs
        if (rootData == -1) {
            return null;
        }
        TreeNode<Integer> root = TreeNode<>(rootData);
        System.out.println("Enter number of children for "+ rootData);
        childrenCount = s.nextInt(); //Get input for no. of child nodes
        while(childrenCount > 0){
            TreeNode child = takeTreeInput(); //Input for all childs
            root.children.add(child); //Add child
            childrenCount--;
        }
        return root;
    }

    public int numNodes(TreeNode<Integer> root){
        if(root == null) { 
            return 0;
        }
        int ans = 1; // To store total count
        for (int i = 0; i < root.children.size(); i++) {
            ans += numNodes(root.children); // recursively storing count of children’s children nodes.
        }
        return ans; 
    }
//interview question 
    public void addChild(TreeNode<T> child) {
        children.add(child);
    }

}




import package.LinkTree; 
public class LinkTree<T> {
    TreeNode<T> root;

    public void addChildToRoot(T childData) {
        TreeNode<T> childNode = new TreeNode<>(childData);
        if (root == null) {
            root = childNode;
        } else {
            root.addChild(childNode);
        }
    }
}

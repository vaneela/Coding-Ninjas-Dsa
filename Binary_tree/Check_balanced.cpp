/**********************************************************
	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public : 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/
int height(BinaryTreeNode<int> *root){
	if(root==NULL)
        return 0;
    int l = height(root->left);
    int r = height(root->right);
    return max(l,r)+1;
    
}

bool isBalanced(BinaryTreeNode<int> *root) {
	// Write your code here
	if(root==NULL)
        return 1;
    int l = height(root->left);
    int r = height(root->right);
    if(abs(l-r)>1)
        return 0;
   bool lb = isBalanced(root->left);
    bool rb = isBalanced(root->right);
    return lb&&rb;
    
}
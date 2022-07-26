void mirrorBinaryTree(BinaryTreeNode<int>* root) {
    // Write your code here
    if(root==NULL)
        return;
    
    mirrorBinaryTree(root->left);
    mirrorBinaryTree(root->right);
	BinaryTreeNode<int>*temp = root->right;
    root->right=root->left;
    root->left=temp;

}
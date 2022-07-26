int height(BinaryTreeNode<int>* root) {
    // Write our code here
    int h = 1,l=0,r=0;
    if(root==NULL)
        return 0;
    
    l=  height(root->left);
    r = height(root->right);
	
    h=max(l,r)+1;
    return h;
}
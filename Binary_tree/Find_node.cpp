bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    // Write your code herei
    if(root==NULL)
        return 0;
    if(root->data==x)
        return 1;
    bool l = isNodePresent(root->left,x);
    bool r = isNodePresent(root->right,x);
    if(l || r)
        return 1;
    else 
        return 0;
    
}
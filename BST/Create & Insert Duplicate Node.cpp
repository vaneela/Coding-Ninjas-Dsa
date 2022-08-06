void insertDuplicateNode(BinaryTreeNode<int> *root) {
    // Write your code here
	    if(root==NULL)
            return;
    BinaryTreeNode<int> *temp = root->left;
    BinaryTreeNode<int> *newNode = new BinaryTreeNode<int> (root->data);
    root->left = newNode;
    newNode ->left = temp;
    insertDuplicateNode(root->left->left);
    insertDuplicateNode(root->right);
}
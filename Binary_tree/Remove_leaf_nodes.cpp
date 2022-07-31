BinaryTreeNode<int> *removeLeafNodes(BinaryTreeNode<int> *root)
{
    // Write your code here
    if (root != NULL)
    {
        if (!root->right && !root->left)
        {
            return NULL;
        }
    }
    else
        return NULL;
    // BinaryTreeNode<int>* left =

    // BinaryTreeNode<int>* right =
    root->left = removeLeafNodes(root->left);
    root->right = removeLeafNodes(root->right);
    return root;
}
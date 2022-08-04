
void elementsInRangeK1K2(BinaryTreeNode<int> *root, int s, int e)
{
    // Write your code here
    if (root == NULL)
        return;

    if (s < root->data)
        elementsInRangeK1K2(root->left, s, e);

    if (root->data >= s && root->data <= e)
        cout << root->data << " ";

    if (e > root->data)
        elementsInRangeK1K2(root->right, s, e);
}
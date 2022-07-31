int getSum(BinaryTreeNode<int>* root) {
 	int sum = 0;
    if(root==NULL)
        return 0;
    sum +=root->data;

    sum += getSum(root->left);
    sum+= getSum(root->right);
    // Write your code here
    return sum;
}
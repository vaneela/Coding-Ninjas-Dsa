#include<climits>
int maxnode(BinaryTreeNode<int> *root){
    if(root==NULL)
        return INT_MIN;
    int r;
    r= root->data;
    int left= maxnode(root->left);
    int right = maxnode(root->right);
    return max(r,max(left,right));
}
int minnode(BinaryTreeNode<int> *root){
    if(root==NULL)
        return INT_MAX;
    int r;
    r= root->data;
    int left= minnode(root->left);
    int right = minnode(root->right);
    return min(r,min(left,right));
}

bool isBST(BinaryTreeNode<int> *root) {
	// Write your code here
	if(root==NULL)
        return 1;
    int mindata = minnode(root->right);
    int maxdata = maxnode(root->left);
	bool rootans = (root->data > maxdata && root->data <= mindata);
    bool l = isBST(root->left);
    bool r = isBST(root->right);
    return rootans && r&& l;
}
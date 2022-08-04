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
bool searchInBST(BinaryTreeNode<int> *root, int k)
{
    // Write your code here
    bool l = 0, r = 0;
    if (root == NULL)
        return 0;
    if (root->data == k)
        return 1;
    else if (root->data > k)
        return searchInBST(root->left, k);
    else
        return searchInBST(root->right, k);
    return 0;
}

// bool searchInBST(BinaryTreeNode<int> *root , int k) {
// 	// Write your code here
//     bool l =0, r=0;
// 	if(root==NULL)
//         return 0;
//     if(root->data == k)
//         return 1;
//     else if(root->data > k)
//         l= searchInBST(root->left, k);
//     else
//         r= searchInBST(root->right, k);
//     return r||l;
// }
BinaryTreeNode<int>* madebst(int * arr, int s, int e){
    if(s > e)
        return NULL;
    int mid = s+ (e-s)/2;
	
    BinaryTreeNode<int> * root= new BinaryTreeNode<int>(arr[mid]);
    BinaryTreeNode<int> * left= madebst(arr,s,mid-1);
    BinaryTreeNode<int> * right= madebst(arr,mid+1,e);
    root->left = left;
    root->right = right;
    return root;
	
}
BinaryTreeNode<int>* constructTree(int *input, int n) {
	// Write your code here
    return madebst(input,0, n-1);
    
}
/***********************************************************
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
BinaryTreeNode<int>* build(int * in, int* pre,int preS, int preE, int inS, int inE){
    if(preS> preE)
        return NULL;
    int rootdata = pre[preS];
    int linS = inS;
    int rootIndex = -1;
    for(int i = inS; i <= inE; i++){
        if(in[i] == rootdata){
            rootIndex = i;
            break;
        }
    }
    int linE= rootIndex -1;
	int rinS = rootIndex + 1;
    int rinE = inE;
    int lpreS = preS +1;
    int lpreE = lpreS + (linE- linS);
    int rpreS = lpreE +1;
    int rpreE = preE;
    BinaryTreeNode<int>*root = new BinaryTreeNode<int>(rootdata);
    root->left = build(in,pre,lpreS,lpreE, linS, linE);
    root->right = build(in,pre,rpreS,rpreE, rinS, rinE);
    
	return root;
}
BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
    // Write your code here
    return build(inorder, preorder,0,preLength-1, 0, inLength-1 );
}
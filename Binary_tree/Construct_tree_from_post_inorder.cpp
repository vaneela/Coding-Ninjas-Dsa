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
BinaryTreeNode<int>* build(int * post, int *in, int postS, int postE, int inS, int inE){
    if(inS > inE)
        return NULL;
    int rootdata = post[postE];
    int rootIndex = 0;
    for(int i = inS; i<= inE; i++){
        if(in[i] == rootdata){
            rootIndex = i;
            break;
        }
    }
    int LinS = inS;
    int LinE = rootIndex -1;
    int RinS = rootIndex +1 ;
    int RinE = inE;
    int LpostS = postS;
    int LpostE = LpostS + (LinE - LinS);
    int RpostS = LpostE +1;
    int RpostE = postE-1;
	
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootdata);
    root->left = build(post, in, LpostS, LpostE, LinS, LinE);
    root->right = build(post, in, RpostS, RpostE, RinS, RinE);
    return root;
    
        
        
}
BinaryTreeNode<int>* buildTree(int *postorder, int postLength, int *inorder, int inLength) {
    // Write your code here
    return build(postorder, inorder,0,postLength-1, 0, inLength-1);
}
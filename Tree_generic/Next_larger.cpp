TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {
    // Write your code here
	TreeNode<int>*ansNode =NULL;
    
    if(root == NULL)
        return NULL;
    if(root->data >x){
        ansNode = root;

    }
        
    for(int i=0;i<root->children.size();i++){
       
       	TreeNode<int>* curNode = getNextLargerElement(root->children[i], x);
    	if(ansNode==NULL){
			ansNode = curNode;  
            
        } else
        if(curNode->data <ansNode->data){
            
			ansNode = curNode;  
        }
    }
    return ansNode;
    
    
}

void largerst(TreeNode<int>* root,TreeNode<int>**fir,TreeNode<int>**sec){
	if(root==NULL)
        return;
    
    if(*fir==NULL)
        *fir= root;
    else if(root->data > (*fir)->data){
        *sec = *fir;
        *fir=root;
    }else if(*sec==NULL){
        if(root->data < (*fir)->data)
            *sec = root;
    }
    else if(root->data < (*fir)->data && root->data > (*sec)->data)
        *sec = root;
    for(int i=0;i<root->children.size();i++){
        largerst(root->children[i],fir,sec);
    }
    
    
}
TreeNode<int>* getSecondLargestNode(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL)
        return NULL;
    
    TreeNode<int>* large = NULL;
    TreeNode<int>* slarge = NULL;
    largerst(root,&large,&slarge);
    if(slarge==NULL)
        return NULL;
    
 
    
    return slarge;
}
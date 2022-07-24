void helper(TreeNode<int> * & root, int d){
    root->data = d;
    for(int i=0;i<root->children.size();i++){
        helper(root->children[i],d+1);
    }
}
void replaceWithDepthValue(TreeNode<int>* root) {
    // Write your code here
    return helper(root,0);
}
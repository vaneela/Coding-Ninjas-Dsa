/************************************************************
 
    Following is the structure for the TreeNode class

    template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;
    
        TreeNode(T data) {
            this->data = data;
        }
    
        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };

************************************************************/

int getLeafNodeCount(TreeNode<int>* root) {
    // Write your code here
    int sum =0;
    if(root->children.size()==0)
        return 1;
    for(int i=0;i<root->children.size();i++){
        sum += getLeafNodeCount(root->children[i]);
    }
    return sum;
}
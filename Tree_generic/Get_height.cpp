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

int getHeight(TreeNode<int>* root) {
    // Write your code here
    int maxx= 0;
    for(int i=0;i<root->children.size();i++){
        int cur =  getHeight(root->children[i]);
        maxx = max(maxx, cur);
    }
    return maxx+1;
} 
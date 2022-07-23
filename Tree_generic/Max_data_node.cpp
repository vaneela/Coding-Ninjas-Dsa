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

TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    // Write your code here
    int max = root->data;
    TreeNode<int>* ans = root;
    queue<TreeNode<int>*> pending;
    pending.push(root);
    // sum+=root->data;
    while(pending.size()!=0){
        TreeNode<int>* cur = pending.front();
        pending.pop();
        if(cur->data > max){
            max = cur->data ;
            ans = cur;
        }
        // sum+=cur->data;
        for(int i=0;i<cur->children.size();i++){
            TreeNode<int>* child = cur->children[i];
            pending.push(child);
            if(child->data > max){
            max = child->data ;
            ans = child;
        }
        }
    }
    return ans;
}
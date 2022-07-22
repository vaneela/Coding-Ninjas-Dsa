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

int sumOfNodes(TreeNode<int>* root) {
    // Write your code here
    int sum = 0;
    queue<TreeNode<int>*> pending;
    pending.push(root);
    sum+=root->data;
    while(pending.size()!=0){
        TreeNode<int>* cur = pending.front();
        pending.pop();
        // sum+=cur->data;
        for(int i=0;i<cur->children.size();i++){
            TreeNode<int>* child = cur->children[i];
            pending.push(child);
            sum+=child->data;
        }
    }
    return sum;
}
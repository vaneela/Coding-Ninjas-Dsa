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

void printLevelWise(TreeNode<int>* root) {
    // Write your code here
    queue < TreeNode<int>*> pending;
    pending.push(root);
    while(pending.size()!=0){
        TreeNode<int>* cur = pending.front();
        pending.pop();
        cout << cur->data<< ":";
        for(int i=0;i<cur->children.size();i++){
            TreeNode<int>* child = cur->children[i];
            cout << child->data ;
            pending.push(child);
            if(i < (cur->children.size()-1))
                cout << ",";
        }
        cout << endl;
    }
    
}
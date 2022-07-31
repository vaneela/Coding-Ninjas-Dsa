void printLevelWise(BinaryTreeNode<int> *root) {
    // Write your code here
	queue<BinaryTreeNode<int> *>q;
    q.push(root);
    q.push(NULL);
    BinaryTreeNode<int> *cur;
    while(!q.empty()){
        cur = q.front();
        q.pop();
        if(cur==NULL){
            cout <<endl;
            if(q.empty())
                break;
            q.push(NULL);
        }else{
            cout << cur->data <<" ";
            if(cur->left != NULL)
                q.push(cur->left);
            if(cur->right !=NULL)
                q.push(cur->right);
        }
            
    }
    
}
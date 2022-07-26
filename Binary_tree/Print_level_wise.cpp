void printLevelWise(BinaryTreeNode<int> *root) {
	// Write your code here
	queue<BinaryTreeNode<int>*>pending;
    pending.push(root);
    while(pending.size()!=0){
        BinaryTreeNode<int> * cur = pending.front();
        pending.pop();
        cout << cur->data <<":";
        if(cur->left!=NULL){
            cout << "L:" << cur->left->data<<",";
        	pending.push(cur->left);
        }else{
            cout <<"L:-1,";
        }
        if(cur->right!=NULL){
            cout <<"R:"<<cur->right->data << endl;
        	pending.push(cur->right);
        	       
        }else
            cout <<"R:-1" << endl;
            
        
        }

}
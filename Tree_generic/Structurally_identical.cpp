bool areIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
    // Write your code here
    bool re=0;
      if(root2==NULL && root1 ==NULL)
        return 1;
    if(root2==NULL || root1 ==NULL)
        return 0;
    if(root1->data == root2->data)
        re = 1;
    if(root1->children.size()!=root2->children.size())
        return 0;
    int s = min(root2->children.size(),root2->children.size());
    for(int i=0;i<s;i++){
        bool ans = areIdentical(root1->children[i],root2->children[i]);
        if(ans)
            return 1;
        else
            return 0;
    }
    return re;
}
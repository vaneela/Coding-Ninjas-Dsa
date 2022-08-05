#include<bits/stdc++.h>
#define ll long long
using namespace std;
pair<Node<int>*,Node<int>*> solve(BinaryTreeNode<int>* root){
    if(root==NULL)
        return {NULL,NULL};
    pair<Node<int>*,Node<int>*> l = solve(root->left);
    pair<Node<int>*,Node<int>*>r = solve(root->right);
    Node <int> *rootNode = new Node<int> (root->data);
    if(l.second==NULL)
        l.second=rootNode;
    else
    l.second->next = rootNode;
    // if(r.first!=NULL)
    rootNode->next = r.first;
    return l;
}
Node<int>* constructLinkedList(BinaryTreeNode<int>* root) {
	// Write your code here
    pair<Node<int>*,Node<int>*>ans = solve(root);
    return ans.first;
}
int main(){
   
    return 0;
}
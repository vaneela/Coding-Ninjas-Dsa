#include<bits/stdc++.h>
#define ll long long
using namespace std;
class TreeNode{
    public:
        int data;
        vector<TreeNode*>children;

        TreeNode(int data){
            this->data = data;
        }
};
int countnodes(TreeNode*root){
    int sum =1 ;
    for(int i=0;i<root->children.size();i++){
        sum += countnodes(root->children[i]);
    }
    return sum;
}
void takeinputLevelwise(){
    int data;
    cin >> data;
    TreeNode * root = new TreeNode(data);
    queue<TreeNode*>pending;
    pending.push(root);
    while(pending.size()!=0){
    int n;
    cout << "Enter number of children of" << root->data << " node\n";
    cin >> n;
        
    }
}
int main(){
    
    return 0;
}


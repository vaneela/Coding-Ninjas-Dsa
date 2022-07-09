int findNode(Node *head, int n){
 	Node * temp=head;
    
    int cnt =0;
    while(temp!=NULL){
        if(temp->data == n){
            return cnt;
        }
        temp=temp->next;
        ++cnt;
                
    }
    return -1;
    // Write your code here.
}
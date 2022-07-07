int size(Node* head){
    int cnt =0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;
}
Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
    Node * temp = head;
    if(temp==NULL){
        return head;
    }
    if(pos==0){
        head = temp->next;
        delete temp;
        return head;
    }
    int c =0;
    int n = size(head);
    if(pos>=n)
        return head;
    // Node * temp= head;
    while(c<pos-1 && temp!=NULL){
        
        temp = temp->next;
        ++c;

    }
    if(temp==NULL)
        return head;
    Node * a = temp;
    temp = temp->next;
    Node *b = temp;
    
    a->next=b->next;
    delete temp;
    return head;
    
}

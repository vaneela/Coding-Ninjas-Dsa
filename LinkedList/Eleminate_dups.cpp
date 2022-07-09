Node *removeDuplicates(Node *head)
{	if(head==NULL)
    return head;
 	Node * temp=head;
 	while(temp->next!=NULL){
        Node* cur=temp->next;
        if(temp->data==cur->data){
            temp->next=cur->next;
            delete cur;
        }else
        temp=temp->next;
        
    }
 return head;
    //Write your code here
    
}
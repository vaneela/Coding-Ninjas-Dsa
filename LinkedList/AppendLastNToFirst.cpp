int sizeL(Node * head){
    if(head==NULL)
		return 0;
    return 1+sizeL(head->next);
}
Node * tailL(Node * head){
    while(head->next != NULL){
        head = head->next;
    }
    return head;
}
Node *appendLastNToFirst(Node *head, int i)
{	int n=sizeL(head);
 	int m= n-i;
 if(i>=n)
     return head;
 	Node * tail = tailL(head);
 	while(m--){
        // int *temp=head;
        tail->next=head;
        head=head->next;
        tail=tail->next;
        tail->next= NULL;
        
    }
 return head;
    //Write your code here
}
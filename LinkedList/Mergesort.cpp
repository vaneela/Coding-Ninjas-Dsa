Node *merge(Node *h1, Node *h2)
{
    // Write your code here
    Node *h = NULL;
    Node *t = NULL;
    if (h1 == NULL)
    {
        return h2;
    }
    else if (h2 == NULL)
        return h1;
    if (h1->data < h2->data)
    {
        h = h1;
        t = h1;
        h1 = h1->next;
    }
    else if (h2 != NULL)
    {
        h = h2;
        t = h2;
        h2 = h2->next;
    }
    while (h1 != NULL && h2 != NULL)
    {
        if (h1->data < h2->data)
        {
            t->next = h1;
            t = t->next;
            h1 = h1->next;
        }
        else
        {
            t->next = h2;
            t = t->next;
            h2 = h2->next;
        }
    }
    if (h1 != NULL)
        t->next = h1;
    else if (h2 != NULL)
        t->next = h2;
    return h;
}
Node * midLL(Node*head){
    
    Node*fast=head->next;
    Node*slow=head;
    while(fast!=NULL && fast->next !=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
Node *mergeSort(Node *head)
    
{	 
    	if(head==NULL || head->next ==NULL)
        return head;
    Node * mid= midLL(head);
 	Node * head1=mid->next;
 	mid->next =NULL;
    
	//Write your code here
   
    // Node * newhead=mid;
   	Node* left= mergeSort(head);
    Node * right=mergeSort(head1);
    Node * ans= merge(left,right);
    return ans;
}
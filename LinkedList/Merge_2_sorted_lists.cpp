Node *mergeTwoSortedLinkedLists(Node *h1, Node *h2)
{
    //Write your code here
    Node * h =NULL;
    Node * t = NULL;
    if(h1==NULL ){
		return h2;
    }else if(h2==NULL)
        return h1;
    if(h1->data < h2->data){
        h = h1;
        t =h1;
        h1=h1->next;
    }else if(h2!=NULL){
        h=h2;
        t=h2;
        h2=h2->next;
    }
    while(h1!=NULL && h2!=NULL){
        if(h1->data <h2->data){
            t->next =h1;
            t = t->next;
            h1=h1->next;
        }else{
            t->next =h2;
            t = t->next;
            h2=h2->next;
        }
    }
    if(h1!=NULL)
        t->next = h1;
    else if(h2!=NULL)
        t->next = h2;
    return h;
    
}
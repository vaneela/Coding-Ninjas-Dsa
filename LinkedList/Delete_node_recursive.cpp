Node *deleteNodeRec(Node *head, int pos) {
	//Write your code here
    Node *x;
	if(head==NULL)
        return head;
    if(pos==0){
        Node * temp = head;
        head = temp->next;
        delete temp;
        return head;
    }
    else{
         x = deleteNodeRec(head->next , pos-1);
    }
    head->next = x;

}
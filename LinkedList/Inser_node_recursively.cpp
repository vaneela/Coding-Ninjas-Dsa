Node* insertNode(Node *head, int i, int data) {
	Node * x;
    if(head==NULL)
        return head;
    if(i==0){
        Node* temp=head;
        Node * newNode= new Node(data);
        head = newNode;
        newNode->next=temp;
        return head;
    }
    else{
		 x= insertNode(head->next,i-1,data);
    }
	head ->next =x;
}
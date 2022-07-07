void printReverse(Node *head)
{	if(head==NULL)
    	return;
 	printReverse(head->next);
 	cout << head->data<< " ";
    //Write your code here
}
int findNodeRec(Node *head, int n)
{
	//Write your code here
    if(head==NULL)
        return -1;
    if(head->data==n)
        return 0;
	int ind=findNodeRec(head->next,n);
    if(ind==-1)
        return -1;
    return 1+ind;
}
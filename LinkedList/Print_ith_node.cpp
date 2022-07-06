void printIthNode(Node *head, int i)
{
    //Write your code here
    int n=0;
    while(head!=NULL){
        if(n==i)
            cout << head->data << endl;
        ++n;
        head=head->next;
    }
}
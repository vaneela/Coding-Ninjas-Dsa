int length(Node *head)
{
    //Write your code here
    int n=0;
    while(head!=NULL){
        ++n;
        head = head->next;
    }
    return n;
}
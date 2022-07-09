bool pal(vector<int> &arr){
    bool ans=1;
    int i=0,j=arr.size()-1;
    while(i<j){
        if(arr[i++]==arr[j--])
            ans=1;
        else
            return 0;
    }
    return ans;
}
bool isPalindrome(Node *head)
{
    //Write your code here
   vector<int>arr;
    int size=0;
    while(head!=NULL){
        size++;
        arr.push_back(head->data);
        head=head->next;
    }
    return pal(arr);
    
}
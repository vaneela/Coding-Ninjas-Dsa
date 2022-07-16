void reverseStack(stack<int> &s1, stack<int> &s2) {
    //Write your code here
	if(s1.size()==1 || s1.size()==0){
        return;
    }
    int temp= s1.top();
	s1.pop();
    reverseStack(s1,s2);
    while(s1.size()!=0){
        s2.push(s1.top());
        s1.pop();
    }
    s1.push(temp);
    while(s2.size()!=0){
        s1.push(s2.top());
        s2.pop();
    }
    
}
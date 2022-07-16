#include <queue>
void reverseQueue(queue<int> &input) {
	// Write your code here
    int size=input.size();
 
    if(size==1)
        return;
    

        int temp=input.front();
        // cout << input.dequeue() << " ";
      
        input.pop();
           size--;
        reverseQueue(input);
        input.push(temp);
   
     
        
    
}
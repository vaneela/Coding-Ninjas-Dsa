#include<bits/stdc++.h>
#define ll long long
using namespace std;

class StackUsingDynamicArray{
    int *data;
    int capacity;
    int nextIndex;

    public:

        //constructor
        StackUsingDynamicArray(){
            data = new int[5];
            capacity = 5;
            nextIndex = 0;
        }

        // insert elements
        void push(int element){
            if(nextIndex==capacity){
               
                capacity *=2;
                int * newdata= new int[capacity];
                for(int i=0;i<nextIndex;i++){
                    newdata[i]=data[i];
                }
                delete [] data;
                data=newdata;
                
            }
            data[nextIndex++]=element;
        }

        // isempty
        bool isempty(){
            return (nextIndex==0);
        }

        // delete
        int pop(){
            if(isempty()){
                cout << "stack is empty.\n";
                return INT_MIN;
            }
            return data[--nextIndex];
        }

        // top
        int top(){
            if(isempty()){
                cout << "stack is empty.\n";
                return INT_MIN;
            }
            return data[nextIndex-1];
        }

        // size
        int size(){
            return nextIndex;
        }
};

int main(){
    StackUsingDynamicArray s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);

    s1.push(70);
    s1.push(80);
    s1.push(90);

    cout << s1.top()<< endl;
    cout << s1.pop() << endl;
    cout << s1.top()<< endl;
    cout << s1.pop() << endl;
    cout << s1.top()<< endl;
    cout << s1.pop() << endl;
    cout << s1.top()<< endl;
    cout << s1.pop() << endl;
    cout << s1.top()<< endl;
    cout << s1.pop() << endl;
    cout << s1.top()<< endl;
    cout << s1.pop() << endl;
    cout << s1.top()<< endl;
    cout << s1.pop() << endl;
    cout << s1.isempty()<< endl;
    cout << s1.size() << endl;
    return 0;
}
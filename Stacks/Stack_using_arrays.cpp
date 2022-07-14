#include<bits/stdc++.h>
#define ll long long
using namespace std;

class StackUsingArray{
    int *data;
    int capacity;
    int nextIndex;

    public:

        //constructor
        StackUsingArray(int totalsize){
            data = new int[totalsize];
            capacity = totalsize;
            nextIndex = 0;
        }

        // insert elements
        void push(int element){
            if(nextIndex==capacity){
                cout <<"Stack full\n";
                return;
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
    StackUsingArray s1(4);
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    cout << s1.top()<< endl;
    cout << s1.pop() << endl;
    cout << s1.isempty()<< endl;
    cout << s1.size() << endl;
    return 0;
}
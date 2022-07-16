#include<bits/stdc++.h>
#define ll long long
using namespace std;

template <typename T>
class stack{
    T * data;
    int capacity;
    int nextIndex;

    public:
    stack(){
        data = new T[5];
        capacity = 5;
        nextIndex = 0;
    }
    // push
    void push( T element){
        if(nextIndex==capacity){
            capacity *= 2;
            T newdata = new T[capacity];
            for(int i=0; i<nextIndex; i++)
                newdata[i] = data[i];

            delete data[];
            data = newdata;
        }
        data[nextIndex++]=element;
    }
    // isempty

    bool isempty(){
        return nextIndex==0;
    }

    // top
    T top(){
        if(nextIndex==0){
            cout << "Stack is empty.\n";
            return 0;   
        }
        return data[nextIndex-1];
    }
     
     // pop
    T pop(){
        if(nextIndex==0){
            cout << "Stack is empty.\n";
            return 0;   
        }
        return data[--nextIndex];
    }
    int size(){
        return nextIndex;
    }
};
int main(){

    return 0;
}
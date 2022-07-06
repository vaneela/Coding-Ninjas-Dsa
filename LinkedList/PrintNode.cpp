#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
class Node{
    public:
    int data;
    Node * next ;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
   
};
 void print(Node * head){
        while(head != NULL){
            cout << head->data<< " ";
            head = head->next;

        }
        cout << endl;
    }
int main(){
    Node n1(1),n2(2),n3(3),n4(4),n5(5);
    Node * head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    cout << head<< endl;

    print(head);
    cout << head << endl;
    return 0;
}
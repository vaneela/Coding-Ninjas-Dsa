/************************************************************
 
    Following is the structure of the node class 
 
    class Node {
    	public :
    	int data;
    	Node *next;

    	Node(int data) {
        	this->data = data;
        	next = NULL;
    	}
	};

**************************************************************/


class Stack {
	// Define the data members
    Node * head;
    int size;
   public:
    Stack() {
        // Implement the Constructor
        head=NULL;
        size=0;
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        return size;
        // Implement the getSize() function
    }

    bool isEmpty() {
        return head==NULL;
        // Implement the isEmpty() function
    }

    void push(int element) {
        Node * newNode = new Node(element);
        if(head==NULL){
            head=newNode;
            size++;
            return;
        }
        // Node * temp=head;
        newNode->next=head;
        head=newNode;
        size++;
        // Implement the push() function
    }

    int pop() {
        if(head==NULL)
            return -1;
        int data =0;
        data=head->data;
        Node*temp=head;
        delete head;
        head=temp->next;

        size--;
        
        return data;
        // Implement the pop() function
    }

    int top() {
         int data =-1;
        if(head!=NULL){
            data=head->data;
        }
        return data;
        // Implement the top() function
    }
};
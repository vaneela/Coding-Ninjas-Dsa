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

class Queue {
	// Define the data members
    Node * head;
    Node * tail;
    int size;
    
   public:
    Queue() {
		// Implement the Constructor
        head=NULL;
        tail=NULL;
        size=0;
	}
	
	/*----------------- Public Functions of Stack -----------------*/

	int getSize() {
		return size;
        // Implement the getSize() function
	}

    bool isEmpty() {
        return size==0;
		// Implement the isEmpty() function
	}

    void enqueue(int data) {
        Node * newNode= new Node(data);
        if(head==NULL){
            size++;
            head=newNode;
            tail=newNode;
            return;
        }
        // Node * temp=
        tail->next=newNode;
        tail=tail->next;
		size++;
        // Implement the enqueue() function
	}

    int dequeue() {
        if(size==0)
            return -1;
        int data=head->data;
        head=head->next;
        size--;
        return data;
        // Implement the dequeue() function
    }

    int front() {
        if(size==0)
            return -1;
        return head->data;
        // Implement the front() function
    }
};
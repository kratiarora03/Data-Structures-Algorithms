#include <iostream>
using namespace std;

class Node{
    public:
    int data; 
    Node* next; 

    Node(){
        this->data = 0;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* head){
    Node* temp = head ; 
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(Node* &head, Node* &tail, int data) {
    //check for Empty LL
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else {
        //step1:
        Node* newNode = new Node(data);
        //step2:
        newNode -> next = head;
        //step3:
        head = newNode;
    }
}

Node* Reverse(Node* head){
    Node* prev = NULL; 
    Node* cur = head;

    while(cur != NULL){
        Node* next = cur->next;
        cur-> next = prev; 
        prev = cur; 
        cur = next; 
    }
    return prev; 
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head , tail , 40);
    insertAtHead(head , tail , 30);
    insertAtHead(head , tail , 20);
    insertAtHead(head , tail , 10);

    cout << "Original List: ";
    print(head);

    head = Reverse(head); 

    cout << "Reversed List: ";
    print(head);

    return 0;
}

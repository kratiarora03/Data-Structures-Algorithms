#include <iostream>
using namespace std;

class Node {
    public:
    int data; 
    Node* next; 
    Node* prev; 

    Node(){
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
    }

    Node(int data ){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print(Node* head){
    Node* temp = head ; 
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}


void insertAtHead(Node* &head, Node* &tail, int data) {
    //LL is empty 
    if( head == NULL ){
        Node* newNode = new Node(data); 
        head = newNode;
        tail = newNode;
    }else{
        Node* newNode = new Node(data);
        newNode->next = head;
        head-> prev = newNode;
        head = newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data){
    if( head == NULL ){
        Node* newNode = new Node(data); 
        head = newNode;
        tail = newNode;}
       
        else{
            Node* newNode = new Node(data);
            tail-> next = newNode;
            newNode -> prev = head;
            tail = newNode;
        }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head, tail,30);
    insertAtHead(head, tail,20);
    insertAtHead(head, tail,10);
   // print(head);
    insertAtTail(head, tail, 40);
    print(head);

}
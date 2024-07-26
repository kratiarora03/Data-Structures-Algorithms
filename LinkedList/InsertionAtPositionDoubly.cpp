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
   
   Node(int data){
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

void insertAtPosition(Node* &head, Node* &tail, int data , int position){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    } else{
     Node* newNode = new Node(data);
     Node* prevNode = NULL;
     Node* currNode = head; 
     while(position !=1){
        position--;
        prevNode= currNode;
        currNode = currNode->next;
 }
 prevNode->next = newNode;
 newNode->prev = prevNode;
 currNode->prev= newNode;
 newNode->next = currNode;

    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head, tail, 40);
     insertAtHead(head, tail, 30);
      insertAtHead(head, tail, 20);
       insertAtHead(head, tail, 10);

       insertAtPosition(head, tail , 25,3);
    print(head);
}
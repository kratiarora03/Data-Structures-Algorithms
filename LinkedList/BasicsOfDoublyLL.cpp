#include <iostream>
using namespace std;

class Node {
    public : 
    int data; 
    Node* prev; 
    Node* next;

    Node(){
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
},

void print(Node* head){
    Node* temp = head ; 
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

void FindLength(Node* head){
    Node* temp = head; 
    int len= 0; 
    while(temp != NULL){
     len++;
     temp = temp->next;
    }
    return len;
}
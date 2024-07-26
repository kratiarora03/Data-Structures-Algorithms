void deleteNode(Node* &head, Node* &tail, int position) {
  if(head == NULL) {
    //LL is empty
    cout << "Cannot delete, cox LL is empty" << endl;
    return;
  }

  if(head == tail) {
    Node* temp = head;
    delete temp;
    head = NULL;
    tail = NULL;
    return;
  }
  

  int len = findLength(head);
  if(position == 1) {
    //delete from head
    Node* temp = head;
    head = head -> next;
    temp -> next = NULL;
    head -> prev = NULL;
    delete temp;
  }
  else if(position == len) {
    //delete from tail
    Node* prevNode = tail -> prev;
    prevNode->next = NULL;
    tail-> prev = NULL;
    delete tail;
    tail = prevNode;
  }
  else {
    //delete from middle
    //step1: set prevNode/currNode/nextNode
    Node* prevNode = NULL;
    Node* currNode = head;
    while(position != 1) {
      position--;
      prevNode = currNode;
      currNode = currNode->next;
    }
    Node* nextNode = currNode -> next;

    prevNode->next = nextNode;
    currNode->prev = NULL;
    currNode->next = NULL;
    nextNode -> prev = prevNode;

    delete currNode;


  }
}

int main() {

  Node* head = NULL;
  Node* tail = NULL;
  insertAtHead(head, tail, 40);
  insertAtHead(head, tail, 30);
  insertAtHead(head, tail, 20);
  insertAtHead(head, tail, 10);
  print(head);
   cout << endl;
//   insertAtTail(head, tail, 1000);
//insertAtPosition(head, tail, 1000, 5);
  //print(head);

  deleteNode(head, tail, 4);
  print(head);
//   cout << endl;
//   deleteNode(head, tail, 2);
//   print(head);

//   cout << endl;
//   deleteNode(head, tail, 2);
//   print(head);

//   cout << endl;
//   deleteNode(head, tail, 1);
//   print(head);
//   cout << "length of LL is: " << findLength(head) << endl;

//   deleteNode(head, tail, 1);
//   print(head);
  return 0;
}
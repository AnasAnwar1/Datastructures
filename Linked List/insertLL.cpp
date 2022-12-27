#include <iostream>
using namespace std;

class Node {
   
   public:
   int data;
   Node* next;
    
   Node (int x){
    data = x;
    next = NULL;
   }
};


void printHead(Node* &head){

    Node* temp = head;

    while(temp != NULL){

        cout << temp -> data ;
        temp = temp -> next;
        cout << "->";
    }
    cout << "NULL";
}

void insertAtHead(Node* &head , int data){

    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;     
}

int main()
{
  
   Node* node1 = new Node(15);
   Node* node2 = new Node(20);
   Node* node3 = new Node(25);
   
  // cout << node1 -> data << "->" << node2 -> data << "->" << node3 -> data << endl;

   Node* head = node1;
   head->next = node2;
   node2->next = node3;

//   printHead(head);

   insertAtHead(head, 10);

   printHead(head);
   cout<<endl;
   insertAtHead(head,5);
   printHead(head);
   
}
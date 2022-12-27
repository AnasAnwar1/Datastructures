// #include <iostream>
// using namespace std;

// class Node{

//     public:
     
//      int data;
//      Node* next;

//      Node (int x){
//         data=x;
//         next=NULL;
//      }
// };

// void printTail(Node* &tail){

//     Node* temp = tail;

//     while(temp != NULL){

//         cout<< temp->data<<"->";
//         temp = temp->next;
//         if(temp == NULL)
//         cout<<temp->data<<"->";
//     } 
//     cout<<"NULL";
// }

// void insertAtTail(Node* &tail, int data){

//     Node* temp = new Node(data);
//     temp -> next = tail;
//     tail = temp;
// }


// int main(){

//    Node* node1 = new Node(15);
//    Node* node2 = new Node(20);
//    Node* node3 = new Node(25);
   
//    Node* tail = NULL;
//    node1 -> next = node2;
//    node2 -> next = node3;
//     insertAtTail(tail, 30);
//    node3 -> next = NULL;  
//     printTail(tail);
// }


#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node (int x){
        data=x;
        next = NULL;
    }
};

void insertAtTail(Node* &tail, int d){

    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void printTail(Node* &head ){

    Node* temp = head;
    // Node* t=tail;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
        // if(temp==NULL)
        // cout<<t->data<<" ";
    }
}

int main(){

    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);

    Node* tail = node3;

    // Node* tail= NULL;
    Node* head= node1;
    node1 -> next = node2;
    node2 -> next = node3;

    insertAtTail(tail , 40);

    printTail(head);
    cout<<endl;

    insertAtTail(tail,50);
    printTail(head);
}
// #include <bits/stdc++.h>
// using namespace std;
// class Node{

//     public:
//     int data;
//     Node* next;

//     Node(int x){
//         data=x;
//         next=NULL;
//     }
// };

// void printLL(Node* &tail){

//     Node* temp = tail;
//     do
//     {
//         cout<<tail->data<<" ";
//         tail=tail->next;
//     } while (tail!=temp);
    
// }

// void circularLL(Node* &tail,int element,int d){
//     if(tail==NULL){
//         Node* temp = new Node(d);
//         tail=temp;
//         temp->next=temp;
//     }
    
//     else{
//         Node*curr=tail;
//         while(curr->data != element){
//             curr=curr->next;
//         }
//         Node* naya = new Node(d);
//         naya->next = curr->next;
//         curr->next=naya;
//     }

// }

// int main(){

//     Node* node1 = new Node(10);
//     Node* node2 = new Node(20);
//     Node* node3 = new Node(30);
//     node1->next= node2;
//     node2->next = node3;
    
//     Node* tail = NULL;

//     // printLL(tail);
//     circularLL(tail,1,50);
//     printLL(tail);

//     circularLL(tail,50,40);
//     printLL(tail);

//     circularLL(tail,40,80);
//     printLL(tail);
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

void insert(Node* &head,int element, int d){

    
    Node*curr=head;
    while(curr->data != element){
        curr=curr->next;
    }
    Node* naya = new Node(d);
    naya->next = curr->next;
    curr->next=naya;
    
}

void printTail(Node* &head ){

    Node* temp = head;
    // Node* t=tail;
    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    } while (temp!=head);
    cout<<endl;
    
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
    node3 -> next = node1;

    // insertAtTail(tail , 40);

    printTail(head);

    insert(head,30,50);
    printTail(head);
    
    insert(head,50,70);
    printTail(head);
}
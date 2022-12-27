#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node (int x){
        data=x;
        next=NULL;
        prev=NULL;
    }

};


void print(Node* &head){
    int size=0;
    Node* temp = head;
    while(temp!=NULL){
        size++;
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<"length: "<<size;
}

void insertDLL(Node* & head, int d){

    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insertAtTail(Node* &tail, int d){

    Node* temp = new Node(d);
    temp->prev=tail;
    temp->next=NULL;
    tail->next=temp;
    tail=temp;
}

int main(){

    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* head = node1;
    node1->prev=NULL;
    node1->next = node2;
    node2->prev=node1;
    node2->next=node3;
    node3->prev=node2;
    node3->next=NULL;
    Node* tail = node3;
    print(head);
    cout<<endl;
    insertDLL(head,11);
    print(head);
     cout<<endl;
     
    insertDLL(head,80);
    print(head);
     cout<<endl;
    insertAtTail(tail,50);
    print(head);
}
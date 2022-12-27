#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* prev;

    Node (int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};

void printLL(Node* &head){

    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){
    Node*temp=head;
    Node*posiNode=new Node(d);
    posiNode->next=temp->next;
    temp->next->prev=posiNode;
    temp->next=posiNode;
    posiNode->prev=temp;
}

int main(){

    Node*node1=new Node(10);
    Node*node2=new Node(20);
    Node*node3=new Node(30);
    Node*head=node1;
    node1->prev=NULL;
    node1->next=node2;
    node2->prev=node1;
    node2->next=node3;
    node3->prev=node2;
    node3->next=NULL;
    Node* tail = node3;

    printLL(head);
    insertAtPosition(head,tail,2,50);
    printLL(head);
    insertAtPosition(head,tail,3,70);
    printLL(head);
}
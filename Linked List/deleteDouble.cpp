#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int x){

        data=x;
        next=NULL;
        prev=NULL;
    }

    ~Node(){
        int value = this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory free for: "<<value<<endl;
    }
};

void printLL(Node* &head){

    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

deleteNode(Node* &head, int position){

    if(position==1){
        Node* temp = head;
        temp->next->prev=NULL;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    else{
        Node* naya=head;
        Node* previous=NULL;
        int c=1;

        while(c<position){
            previous=naya;
            naya=naya->next;
            c++;
        }
        previous->next=naya->next;
        naya->next=NULL;
        delete naya;
    }
}
int main(){

    Node* node1 =new Node(10);
    Node* node2 =new Node(20);
    Node* node3=new Node(30);
    Node* head = node1;
    node1->prev=NULL;
    node1->next=node2;
    node2->prev=node1;
    node2->next=node3;
    node3->prev=node2;
    node3->next=NULL;
    printLL(head);
    deleteNode(head,3);
    printLL(head);
}
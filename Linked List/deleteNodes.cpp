#include <bits/stdc++.h>
using namespace std;

class Node{

    public:

    int data;
    Node* next;
    
    Node (int x){
        data = x;
        next = NULL;
    }

    ~Node(){
        int value= this -> data;
        if( this -> next !=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory free for: "<<value<<endl;
    }
};

void deleteNode(Node* &head, int position){
    if(position==1){

    Node* temp = head;
    head= head->next;
    temp->next=NULL;
    delete temp;
    }

    else{

        Node* ongoing = head;
        Node* previous = NULL;

        int c=1;
        while(c<position){

            previous = ongoing;
            ongoing = ongoing->next;
            c++;
        }
        previous->next=ongoing->next;
        ongoing->next=NULL;
        delete ongoing;
    }
}

void printNode(Node* &head){

    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* head = node1;
    node1->next=node2;
    node2->next=node3;
    node3->next=NULL;

    printNode(head);
    deleteNode(head,2);
    printNode(head);
}
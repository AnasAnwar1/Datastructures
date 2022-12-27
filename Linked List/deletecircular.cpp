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

    ~Node(){
        cout<<endl;
        cout<<"destructor called"<<endl;
        int value = this->data;
        if(next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory free for: "<<value<<endl;
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

void deleteCLL(Node* &head, int d){
    Node* curr = head;
    Node* NEXT = curr->next;

    while (curr->data != d){
        NEXT=curr;
        curr = curr->next;
        cout<<"dop"<<endl;
    }
    // cout<<"njen";
    Node* temp = curr->next;
    curr->next = NULL;
    NEXT->next = temp;
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

    deleteCLL(head, 10);
    printTail(head);
}
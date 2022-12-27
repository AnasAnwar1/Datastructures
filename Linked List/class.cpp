#include <bits/stdc++.h>
using namespace std;
class Node{

    public:
    int data;
    Node* next;

    Node(int x){
        data=x;
        next=NULL;
    }
};

void printLL(Node* &head1){

    Node* temp1 = head1;
    while(temp1!=NULL){
        cout<<temp1->data<<" ";
        temp1= temp1->next;
    }
    cout<<endl;
} 

float countLL(Node* &head){
    Node * temp = head;
    float c=0;
    while(temp!= NULL){
        c++; 
        temp = temp->next;
    }
    return c;
}

Node* makeLL(){

    Node* head = NULL ;
    int d;
    cin>>d;
    head=new Node(d);
    Node* temp = head;
    while(d!=0){
        cin>>d;
        if(d==0)
        break;
        Node* newNode = new Node(d);
        temp->next = newNode;
        temp= newNode;

    }
    return head;
}
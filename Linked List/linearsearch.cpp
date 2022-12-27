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
Node* linearSearch(Node* &head){
    Node* temp=head;
    int d;
    cout<<"Enter the Node you want to search: ";
    cin>>d;
    int c=1;
    if(d==temp->data){
        cout<<"Position:"<<c<<" -> "<<temp->data;
    }
    else{
        while(temp!=NULL){
            temp=temp->next;
            c++;
            if(temp->data==d){
            cout<<"Position:"<<c<<" -> "<<temp->data;
            }
        }
    }    
}
void printLL(Node* &head){
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
    Node* node4 = new Node(40);
    Node* node5 = new Node(50);
    Node* head= node1;
    node1->next=node2;
    node2->next=node3;
    node3->next=node4;
    node4->next=node5;
    node5->next=NULL;
    printLL(head);
    linearSearch(head);
}
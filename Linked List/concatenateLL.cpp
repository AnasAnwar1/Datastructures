#include "bits/stdc++.h"
#include "class.cpp"

using namespace std;
Node* concatenateLL(Node* &head1, Node* &head2){
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* newNode = new Node(80);
    Node* temp3 = newNode;
    while(temp1!=NULL){
        temp3->next=temp1;
        temp1=temp1->next;
        temp3=temp3->next;
    }
    while(temp2!=NULL){
        temp3->next = temp2;
        temp2=temp2->next;
        temp3=temp3->next;
    }
    return newNode->next;
}
int main(){

    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* head1 = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    Node* node4 = new Node(40);
    Node* node5 = new Node(50);
    Node* node6 = new Node(60);
    Node* head2 = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = NULL;

    printLL(head1);
    printLL(head2);
    Node* concat=concatenateLL(head1,head2);
    printLL(concat);

}
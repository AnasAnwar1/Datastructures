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
void printLL(Node* &head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}
Node* inputNode(){
    Node* head = NULL;
    Node* tail = NULL;
    int d;
    cin>>d;
    while(d!=0){
        Node* newNode = new Node(d);
        if(head==NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
        cin>>d;
    }
    return head;
}
Node* countEvnOdd(Node* &head){
    Node* temp= head;
    int even=0;
    int odd=0;
    while(temp!=NULL){
        if(temp->data%2==0){
            even++;
        }
        else{
            odd++;
        }
        temp=temp->next;
    }
    cout<<"Even terms: "<<even<<endl;
    cout<<"Odd terms: "<<odd<<endl;
}
int main(){
    
    Node* head= inputNode();
    printLL(head);
    countEvnOdd(head);
    

}
// #include <bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node (int x){
//          data=x;
//         next= NULL;
//         cout<<"Nodebngayi"<<endl;
//     }
// };
// void insertAtMid(Node* &head, int position, int d){

//     Node* temp = head;
//     Node* nodeToInsert = new Node(d);
//     nodeToInsert->data=d;
//     nodeToInsert->next=NULL;
//     int c = 1;

//     while(c<position-1){

//         temp = temp -> next;
//         c++;
//     }

//     nodeToInsert->next=temp->next;
//     temp->next=nodeToInsert;

// }
// void print(Node* &head){

//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp =temp->next;
//     }
//     cout<<endl;
// }



int main(){
    
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);

    Node* head = node1;
    node1 ->next = node2;
    node2 ->next = node3;
    // node3->next = NULL;
    print(head);
    insertAtMid(head,2,50);
    print(head);
}



#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node (int x){

         data=x;
        next= NULL;
        cout<<"Nodebngayi"<<endl;
    }

};
void insertAtMid(Node* &head, int position, int d){

    Node* temp = head;
    Node* nodeToInsert = new Node(d);
    nodeToInsert->data=d;
    nodeToInsert->next=NULL;
    int c = 1;

    while(c<position-1){

        temp = temp -> next;
        c++;
    }

    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;

}
void printLL(Node* &head){

    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp =temp->next;
    }
    cout<<endl;
}



int main(){
    
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);

    Node* head = node1;
    node1 ->next = node2;
    node2 ->next = node3;
    // node3->next = NULL;
    printLL(head);
    insertAtMid(head,2,50);
    printLL(head);
}
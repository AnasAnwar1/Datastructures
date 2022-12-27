#include <iostream>
using namespace std;

struct library{

    int number;
    string bookTitle;
    string authorName;
    string flag;
}x[3];

int main(){
        int c=0;
    for(int i=0;i<3;i++){

        cout<<"Enter the details of book no. "<<i<<" :\n";
        cout<<"Enter book accession number: ";
        cin>>x[i].number;
        cout<<"Enter the Author name: ";
        cin>>x[i].authorName;
        cout<<"Enter the Title of the book; ";
        cin>>x[i].bookTitle;
        cout<<"Enter the flag of the book: ";
        cin>>x[i].flag;
    }

    for(int i=0;i<3;i++){
        
        cout<<"Book details of "<<i<<" :\n";
        cout<<x[i].number<<endl;
        cout<<x[i].authorName<<endl;
        cout<<x[i].bookTitle<<endl;
        cout<<x[i].flag<<endl;
    }    

      cout<<"Add a new book: "<<endl;
        for(int i=0;i<3;i++){

        cout<<"Enter book accession number: ";
        cin>>x[i].number;
        cout<<"Enter the Author name: ";
        cin>>x[i].authorName;
        cout<<"Enter the Title of the book; ";
        cin>>x[i].bookTitle;
        cout<<"Enter the flag of the book: ";
        cin>>x[i].flag;

        
        cout<<x[i].number<<endl;
        cout<<x[i].authorName<<endl;
        cout<<x[i].bookTitle<<endl;
        cout<<x[i].flag<<endl;
    }

    for(int i=0;i<3;i++){
        cout<<"Enter the author name: ";
        cin>>x[i].authorName;
        
        
    }
}
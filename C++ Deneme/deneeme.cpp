#include <iostream>

using namespace std;
class Node{
public:
    int data;
    string name;
    Node* next;
};
prinntList(Node* n){
    while(n!=NULL){
        cout << n->data <<endl;
        n = n->next;
    }
}
nameList(Node* a){
    while(a!= NULL){
        cout<< a->name<<endl;
        a = a->next;
    }
}
printList(Node* z){
    while(z!=NULL){
        cout<<z->data<<endl;
        z = z-> next;
    }
}
int main()
{
    Node* first = NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* salih = NULL;
    Node* cemalettin = NULL;
    Node* aydin = NULL;


    first = new Node();
    second = new Node();
    third = new Node();
    salih = new Node();
    cemalettin = new Node();
    aydin = new Node();

    first -> data = 41;
    first -> next = second;

    second ->data = 94;
    second ->next = NULL;

    third ->name = "E";
    third ->next = salih;

    salih ->name = "SALIH";
    salih ->next = cemalettin;

    cemalettin ->name = "Cemoliber";
    cemalettin -> next = aydin;

    aydin ->name = "Aydin41";
    aydin ->next = NULL;

    nameList(third);
    //cout << third->name<<endl;
    prinntList(first);
    for(int i=1;i<5;i++){
        first->data = i*10;
        second->data = i*94;
        printList(first);
    }



    return 0;
}

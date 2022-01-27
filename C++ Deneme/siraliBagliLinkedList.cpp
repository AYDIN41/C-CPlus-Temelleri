#include <iostream>

using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node* prev;
};
printList(Node* r){
    while(r != NULL){
        cout<< r->data <<endl;
        r = r->next;
    }
}
/*addList(Node* n ,int data){
    while(n->next!= NULL){
        n = n->next;
    }
    n->next = (Node*)malloc(sizeof(Node));
    n->next-> data = data;
    n->next ->next = NULL;

}*/
Node* ad(Node* a, int data){
    if(a==NULL){
        a = (Node*)malloc(sizeof(Node));
        a ->next = NULL;
        a-> prev = NULL;
        a->data=data;
        return a;
    }
    if(a->data>data){
            Node* temp = (Node*)malloc(sizeof(Node));
            temp->data = data;
            temp ->next = a;
            a->prev = temp;
            return temp;
    }
    Node* iter = a;
    while(iter->next != NULL && iter->next->data < data){
             iter = iter->next;

    }
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->next = iter->next;
    iter->next = temp;
    temp->prev = iter;
    if(temp->next!=NULL){
        temp->next->prev = temp;
    }
    temp->data = data;
    return a;

}
Node* delet(Node*r,int data){
    Node *temp;
    Node *iter = r;
    if(r->data==data){
        temp = r;
        r = r->next;
        free(temp);
        return r;
    }
    while(iter->next !=NULL && iter->next->data != data){
        iter = iter->next;
    }
    if(iter->next==NULL){
        cout<<"couldn't find your number"<<endl;
        return r;
    }
    temp = iter->next;
    iter->next = iter->next->next;
    free(temp);
    if(iter->next!=NULL){
        iter->next->prev = iter;
    }

    return r;



}


int main()
{
    Node* root;
    root = NULL;
    /*root = (Node*)malloc(sizeof(Node));
    root -> next = (Node*)malloc(sizeof(Node));
    root -> next = NULL;
    root -> data = 500;*/

    //Node* iter;
    //iter = root;
    root = ad(root,94);
    root = ad(root,41);
    root = ad(root,28);
    root = ad(root,79);
    root = ad(root,46);

    //int i = 0;
    root = delet(root,46);
   root = delet(root,94);
    /*for(i=0;i<5;i++){
        addList(root,i*10);
    }*/
    printList(root);
    //Node* iter = root;
    //for(i=0;i<3;i++){
    //    iter = iter->next;
    //}
    //Node* temp = (Node*)malloc(sizeof(Node));
    //temp->next = iter->next;
    //iter->next = temp;
    //temp->data=22;
    //cout<<endl;
    //printList(root);



    return 0;
}

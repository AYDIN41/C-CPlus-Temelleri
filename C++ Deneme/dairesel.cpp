#include <iostream>

using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node* prev;
};
printList(Node* r){
    Node *iter = r;
    cout<<iter->data<<endl;
    iter = iter->next;
    while(iter != r){
        cout<< iter->data <<endl;
        iter = iter->next;
    }
}
/*addList(Node* n ,int data){
    Node *iter = n;
    Node *temp;

    while(iter->next!= n){
        iter = iter->next;
    }
    temp = (Node*)malloc(sizeof(Node));
    temp-> data = data;
    temp -> next = iter->next;
    iter-> next  = temp;
    /*iter->next = (Node*)malloc(sizeof(Node));
    iter->next-> data = data;
    iter->next ->next = n;*/

//}
Node* ad(Node* a, int data){
    if(a==NULL){
        a = (Node*)malloc(sizeof(Node));
        a ->next = NULL;
        a->prev = NULL;
        a->data=data;
        return a;
    }
    if(a->data>data){
            Node* temp = (Node*)malloc(sizeof(Node));
            temp->data = data;
            temp ->next = a;
            a->prev = temp;
            //a->prev=NULL;
            return temp;
    }
    Node* iter = a;
    while(iter->next != NULL && iter->next->data < data){
             iter = iter->next;

    }
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->next = iter->next;
    iter->next = temp;
    temp->data = data;
    return a;

}
Node* delet(Node*r,int data){
    Node *temp;
    Node *iter = r;
    if(r->data==data){
        while(iter->next!=r){
            iter = iter->next;
        }
        iter->next = r->next;
        free(r);
        /*temp = r;
        r = r->next;
        free(temp);*/
        return iter->next;
    }
    while(iter->next !=r && iter->next->data != data){
        iter = iter->next;
    }
    if(iter->next==r){
        cout<<"couldn't find your number"<<endl;
        return r;
    }
    temp = iter->next;
    iter->next = iter->next->next;
    free(temp);
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
    root = ad(root,"a");
    root = ad(root,79);
    root = ad(root,46);
    printList(root);
    root = delet(root,79);
    root = delet(root,999);
    addList(root,999);
    //int i = 0;
    //root = delet(root,46);
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

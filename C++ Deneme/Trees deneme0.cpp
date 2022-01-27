#include <iostream>
#include <stdio.h>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node* leftChild;
    struct node* rightChild;
};
struct node* root = NULL;

struct node* newNode(int key){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = key;
    temp->leftChild = NULL;
    temp->rightChild = NULL;

    if(root==NULL){
        root=temp;
    }
    return temp;
};
void inOrder(struct node *root){
    if(root != NULL){
        inOrder(root->leftChild);
        cout<<"Data: "<<root->data<<endl;
        inOrder(root->rightChild);
    }
}
struct node* add(struct node* root,int number){
    if(root==NULL){
        return newNode(number);
    }
    if(number < root->data){
        root->leftChild = add(root->leftChild,number);
    }
    else if(number > root->data){
        root->rightChild = add(root->rightChild,number);
    }
    return root;
};
struct node* searchh(int number){

    while(root->data!=number){
        if(root != NULL){
            cout << root->data <<endl;
            if(number < root->data){
                root = root->leftChild;
            }
            else{
                root = root->rightChild;
            }

        }
        if(root==NULL){
            cout<<"Tree does not have any number"<<endl;
            return root;
        }
    }
    cout<<"We found exact number that you look for "<< root->data<<endl;
    return root;
};
int main()
{
    node* tree = NULL;
    tree = add(tree,41);
    tree = add(tree,141);
    tree = add(tree,26);
    tree = add(tree,1071);
    tree = add(tree,0);
    tree = add(tree,7);
    tree = add(tree,1453);
    tree = add(tree,2023);
    inOrder(tree);
    searchh(145);

    return 0;
}

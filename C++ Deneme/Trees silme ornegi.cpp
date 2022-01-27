#include <iostream>
#include <stdio.h>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};
node *add(node*tree,int x){
    if(tree==NULL){
        node* root = (node*)malloc(sizeof(node));
        root->left = NULL;
        root->right = NULL;
        root->data = x;
        return root;
    }
    node* iter= tree;
    if(iter->data<x){
        tree->right = add(tree->right,x);
        return tree;
    }
    tree->left=add(tree->left,x);
    return tree;
}
void travel(node*tree){
    if(tree==NULL){
        return;
    }
    travel(tree->left);
    cout<<"Data: "<<tree->data<<"\n";
    travel(tree->right);
}
int findd(node* tree,int number){
    if(tree==NULL){
        return -1;

    }
    if(tree->data==number){

        return 1;

    }
    if(findd(tree->left,number)==1){

        return 1;

    }
    if(findd(tree->right,number)==1){
        return 1;

    }
    return -1;
}
int maks(node* tree){
    while(tree->right!=NULL){
        tree = tree->right;
    }
    return tree->data;

}
int minn(node *tree){
    while(tree->left != NULL){
        tree = tree->left;
    }
    return tree->data;
}
node* deletee(node* tree,int number){
    if(tree==NULL){
        return NULL;
    }
    if(tree->data==number){
        if(tree->left==NULL && tree->right==NULL){
            return NULL;
        }
        if(tree->right!=NULL){
            tree->data = minn(tree->right);
            tree->right = deletee(tree->right,minn(tree->right));
            return tree;
        }
        tree->data = maks(tree->left);
        tree->left = deletee(tree->left,maks(tree->left));
        return tree;
    }
    if(tree->data < number){
        tree->right = deletee(tree->right,number);
        return tree;
    }
    tree->left = deletee(tree->left,number);
    return tree;
}
int main()
{
    node * agac = NULL;
    agac = add(agac,41);
    agac = add(agac,94);
    agac = add(agac,21);
    agac = add(agac,11);
    agac = add(agac,51);
    agac = add(agac,1);
    agac = add(agac,9);
    agac = add(agac,7);
    agac = add(agac,81);
    agac = add(agac,5);
    agac = add(agac,44);
    travel(agac);
    cout<<findd(agac,11);
    cout<<endl;
    cout <<maks(agac);
    cout<<"\n"<<minn(agac)<<endl;
    agac = deletee(agac,11);
    travel(agac);

    return 0;
}

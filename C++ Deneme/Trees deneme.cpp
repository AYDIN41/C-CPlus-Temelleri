#include <iostream>
#include <stdio.h>
#include<stdlib.h>
using namespace std;

class TreeNode{
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data=0,TreeNode* left = NULL,TreeNode* right=NULL) : data(data), left(left),right(right){    }

};

int main()
{
    TreeNode *root = NULL;
    root = new TreeNode(10);
    root->left = new TreeNode(50);
    root->right = new TreeNode(41);
    cout<<"Root: "<<root->data<<endl;
    cout<<"Right: "<<root->right->data<<endl;
    cout<<"Left: "<<root->left->data<<endl;


    return 0;
}

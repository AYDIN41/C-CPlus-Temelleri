#include <iostream>
#include <stdio.h>
using namespace std;
class StackNode{
public:
    int data;
    StackNode* next;
    StackNode(const int& data,StackNode* next = NULL) : data(data),next(next){  }
};
class Stack{
    StackNode* root;
    int length;
    /*void makeEmpty(){
        while(!isEmpty()){
            pop();
        }
        root = NULL;
    }*/

public:
    Stack() : root(NULL),length(0){   };
    StackNode* begin()const{    return root;     };
    StackNode* end()const{      return NULL;     };
    bool isEmpty()const{
        return begin() == end();
    }
    void makeEmpty(){
        while(!isEmpty()){
            pop();
        }
        root = NULL;
    }
    void push(const int& value){
        StackNode* tmp = new StackNode(value,root);
        root = tmp;
        length++;
    }
    int top()const{
        if(isEmpty()){
            throw "Error : Stack::top() for stack is empty";
        }
        return begin()->data;
    }
    void pop(){
        if(isEmpty()){
            throw "Error : Stack::pop() for stack is empty";
        }
        StackNode* tmp = root;
        root = root->next;
        delete tmp;
        length--;
    }
       void size()const{
           cout<<length<<endl;
        }

    void print()const{
        StackNode* tmp = begin();
        //StackNode* end = s.end();
        while(tmp!= end()){
            cout<<tmp->data<<"  ";
            tmp = tmp->next;
        }

    }
};
int main()
{
    Stack s;
    cout<<s.isEmpty()<<endl;
    for (int i = 0;i<7;i++){
        s.push(i*16);
    }
    s.print();
    cout<<endl;
    s.size();
    s.makeEmpty();
    s.size();
    return 0;
}

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
public:
    Stack() : root(NULL){   };
    StackNode* begin()const{    return root;     };
    StackNode* end()const{      return NULL;     };
    bool isEmpty()const{
        return begin() == end();
    }
    void push(const int& value){
        StackNode* tmp = new StackNode(value,root);
        root = tmp;
    }
    void pop(){
        if(isEmpty()){
            throw "Error : Stack::pop() for stack is empty";
        }
        StackNode* tmp = root;
        root = root->next;
        delete tmp;
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
    for(int i =0;i<10;i++){
        s.push(i*10);
    }
    s.print();
    for(int i= 0;i<9;i++){
        s.pop();
    }
    s.print();
    s.pop();
    try{
        s.pop();
    }catch(const char* ex){
        cout<<ex;
    }

    cout<<endl;
    s.print();

    /*cout<<s.isEmpty()<<endl;
    s.push(55);
    s.push(44);
    s.push(33);
    s.push(22);
    s.push(11);
    cout<<s.isEmpty()<<endl;
    s.print();*/


    return 0;
}

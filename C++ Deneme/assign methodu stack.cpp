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
    ~Stack(){   makeEmpty();  };
    StackNode* begin()const{    return root;     };
    StackNode* end()const{      return NULL;     };
    bool isEmpty()const{
        return begin() == end();
    }
    void makeEmpty(){
        while(!isEmpty()){
            pop();
        }
        //root = NULL;
    }
    Stack& operator=(const Stack& rhs){    return assign(rhs);     }
    Stack& assign(const Stack& rhs){
        makeEmpty();
        if(!rhs.isEmpty()){
            root = new StackNode(rhs.top());
            StackNode* rhstmp = rhs.begin()->next;
            StackNode* lhstmp = begin();
            while(rhstmp != rhs.end()){
                lhstmp->next = new StackNode(rhstmp->data);
                lhstmp = lhstmp->next;
                rhstmp = rhstmp->next;
            }
        }
        return *this;
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
    Stack s1;
    for(int i = 3;i<7;i++){
        s1.push(i*4);
    }
    s1.print();
    Stack s2;
    s2= s1;
    s2.print();
    
    return 0;
}

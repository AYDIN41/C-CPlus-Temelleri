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
public:
    Stack() : root(NULL),length(0){   };
    StackNode* begin()const{    return root;     };
    StackNode* end()const{      return NULL;     };
    bool isEmpty()const{
        return begin() == end();
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
    for(int i =0;i<10;i++){
        s.push(i*10);
    }
    s.print();
    cout << "\n";
    for(int i = 0;i<2;i++){
        s.pop();
    }
    s.print();
    cout<<endl;
    s.size();
   try{
    cout<<endl<<"The Top number is: "<<s.top()<<endl;
    s.pop();
    cout<<"There is a pop  process"<<endl;
    s.print();
    cout<<endl<<"The new top number is: "<<s.top()<<endl;
    s.pop();
    cout<<"There is a pop  process"<<endl;
    s.print();
    cout<<endl<<"The new top number is: "<<s.top()<<endl;
   }catch(const char* ex){
        cout<<ex;
   }
   s.pop();
   s.pop();
   s.print();
   cout<<endl;
   s.size();





    /*for(int i= 0;i<9;i++){
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
    s.print();*/


    return 0;
}

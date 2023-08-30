#include <iostream>
using namespace std;

class Stack{
  public:
  int *arr;
  int top;
  int size;
  
  Stack(int size){
      this->size=size;
      top=-1;
      arr=new int[size];
  }
  
  void push(int element){
      if(size-top>1){
          top++;
          arr[top]=element;
      }
      else{
          cout<<"stack overflow"<<endl;
      }
  }
  
  void pop(){
      if(top>=0){
          top--;
      }
      else{
          cout<<"stack underflow"<<endl;
      }
  }
  
  int peek(){
      if(top>=0){
          return arr[top];
      }
      else{
          cout<<"stack underflow"<<endl;
      }
  }
  
  bool isempty(){
      if(top>=0){
          return 0;
      }
      else{
          return 1;
      }
  }
  
};

int main() {
    Stack s(4);
    
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    
    s.pop();
    
    cout<<s.peek()<<endl;
    
    
    if(s.isempty()){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
    
    return 0;
}

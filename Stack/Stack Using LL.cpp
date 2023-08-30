#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    
    Node(int data){
        this->data=data;
        next=NULL;
    }
};

class Stack{
    Node *head;
    int data;
    int size;
    
    public:
    Stack(){
        head=NULL;
        size=0;
    }
    
    int getSize(){
        return size;
    }
    
    bool isempty(){
        return size==0;
    }
    
    void push(int element){
        //New node creation
        Node *newNode= new Node(element);
        
        //connecting it to head
        newNode->next=head;
        
        //Update Head
        head=newNode;
        
        size++;
    }
    
    int pop(){
        if(isempty()){
            return 0;
        }
        
        int ans=head->data; //To return data
        
        Node *temp=head;  //To delete head
        
        head=head->next; //Pointing to Previos head
        
        delete temp;
        size--;
        
        return ans;
    }
    
    int top(){
        if(isempty()){
            return 0;
        }
        else{
            return head->data;
        }
    }
    
};


int main() {
    Stack s;
    
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    
    cout<<s.pop()<<endl;
    
    cout<<s.top()<<endl;
    
    if(s.isempty()){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
    
    cout<<s.getSize()<<endl;
    
    return 0;
}

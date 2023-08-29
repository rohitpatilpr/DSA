#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void printLL(Node *head){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
}

Node *reverseLL(Node *head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        
        Node *smallAns=reverseLL(head->next);
        Node *tail=head->next;
        tail->next=head;
        head->next=NULL;
        return smallAns;
}
        
Node *inputLL(){
    int data;
    cin>>data;
    
    Node *head=NULL;
    Node *tail=NULL;
    
    while(data!=-1){
        Node *NewNode=new Node(data);
        if(head==NULL){
            head=NewNode;
            tail=NewNode;
        }
        else{
            tail->next=NewNode;
            tail=tail->next;
        }
        cin>>data;
        
    }
    return head;
}        

    
int main() {
    Node *head=inputLL();
    head=reverseLL(head);
    printLL(head);
}

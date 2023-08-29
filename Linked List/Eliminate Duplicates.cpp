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

Node *eliminateDuplicates(Node *head){
        if(head==NULL){
            return head;
        }
        
        Node *t1=head;
        Node *t2=head->next;
        
        while(t2){
            if(t1->data!=t2->data){
                t1->next=t2;
                t1=t2;
            }
            else{
                t2=t2->next;
            }
        }
        
        t1->next=NULL;
        return head;
}

void printLL(Node *head){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
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

    head=eliminateDuplicates(head);
    printLL(head);
    
}

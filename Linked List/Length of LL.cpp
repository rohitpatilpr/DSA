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

int length(Node *head){
        Node *temp=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        return count;
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
    int size=length(head);
    cout<<"Length- "<<size;
}

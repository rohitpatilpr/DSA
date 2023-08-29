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

Node *appendLastNToFirst(Node *head, int n, int len){
        
        if(head==NULL){
            return head;
        }
        
        Node *p=head;
        Node *q=head;
        for(int i=1; i<len-n; i++){
            p=p->next;
        }
        
        for(int i=1; i<len; i++){
            q=q->next;
        }
        
        q->next=head;
        head=p->next;
        p->next=NULL;
        
        return head;
        
}

void printLL(Node *head){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
}

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
    int n;
    cout<<"Enter how many Node that you want to append- "<<endl;
    cin>>n;
    int len=length(head);
    head=appendLastNToFirst(head ,n, len);
    printLL(head);
    
}

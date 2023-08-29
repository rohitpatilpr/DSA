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

Node *insertAtIthPosition(Node *head, int i, int data){
        //Creating New Node
        Node *newNode=new Node(data);
        
        //Inserting at root
        if(i==0){
            newNode->next=head;
            head=newNode;
            return head;
        }
        
        int count=0;
        Node *temp=head;
        while(temp!=NULL && count<i-1){
            temp=temp->next;
            count++;
        }
        
        if(temp!=NULL){
            Node *a=temp->next;
            temp->next=newNode;
            newNode->next=a;
        }
        
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
    int i,data;
    cout<<"Enter Position of Node at you want to insert element - "<<endl;
    cin>>i;
    cout<<"Enter the data- "<<endl;
    cin>>data;
    
    head=insertAtIthPosition(head ,i ,data);
    printLL(head);
    
}

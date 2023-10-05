#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *prev;
    Node *next;
    
    Node(int data){
        this->data=data;
        prev=NULL;
        next=NULL;
    }
};

void deleteNode(int pos, Node* &head, Node* &tail) { 

    if(pos==1){
        Node *temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node *temp=head;
        int count=1;
        while(temp!=NULL && count<pos-1){
            temp=temp->next;
            count++;
        }
        
        if(temp->next==NULL){
            Node *a=tail;
            tail->prev->next=NULL;
            a->prev=NULL;
            delete a;
        }
        else{
            Node* a=temp->next;
            temp->next=temp->next->next;
            temp->next->prev=temp;
            delete a;
        }
    }
}

void insertAtTail(Node* &head, Node* &tail, int data) {
    if(tail==NULL){
        Node *newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }
    else{
        Node *newNode=new Node(data);
        newNode->prev=tail;
        tail->next=newNode;
        tail=newNode;
    }

}
 
void insertAtHead(Node* &head, Node* &tail, int data) {
    if(head==NULL){
        Node *newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }
    else{
        Node *newNode=new Node(data);
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }

}


void insertAtPosition(Node* &head, Node* &tail, int pos, int data) {
    if(pos==1){
        insertAtHead(head, tail, data);
        return;
    }
    
    Node* temp=head;
    int count=1;
    
    while(temp!=NULL && count<pos-1){
        temp=temp->next;
        count++;
    }
    
    if(temp->next==NULL){
        insertAtTail(head, tail, data);
        return;
    }
    else{
        Node *newNode=new Node(data);
        newNode->next=temp->next;
        temp->next->prev=newNode;
        temp->next=newNode;
        newNode->prev=temp;
    }
    
    

}

void printLL(Node *head){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
}

int main(){
    Node *head=NULL;
    Node *tail=NULL;
    insertAtHead(head, tail, 5);
    insertAtHead(head, tail, 7);
    insertAtHead(head, tail, 10);
    insertAtTail(head, tail, 25);
    insertAtPosition(head, tail, 3, 100);
    printLL(head);
    deleteNode(3, head, tail);
    printLL(head);
}

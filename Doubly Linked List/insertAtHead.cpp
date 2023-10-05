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

void insertAtHead(Node* &head, Node* &tail, int data) {

    //empty list
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);
        newNode -> next = head;
        head -> prev = newNode;
        head = newNode;
    }

}


void printLL(Node *head){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
}

int main(){
    Node *head=NULL;
    Node *tail=NULL;
    insertAtHead(head, tail, 5);
    insertAtHead(head, tail, 7);
    insertAtHead(head, tail, 10);
    printLL(head);
}

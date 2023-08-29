#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    
    Node(int data){
        this->data=data;
        this->next;
    }
};

void printLL(Node *head){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
}
    
int main() {
    Node *n1=new Node(10);
    Node *n2=new Node(20);
    
    Node *head=n1;
    n1->next=n2;
    
    printLL(head);
}

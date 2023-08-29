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

Node *mergeTwoSortedLL(Node *head1, Node *head2){
        if(head1==NULL){
            return head2;
        }
        
        if(head2==NULL){
            return head1;
        }
        
        Node *p=NULL;
        Node *q=NULL;
        
        if(head1->data < head2->data){
            p=head1;
            q=head1;
            head1=head1->next;
        }
        else if(head2->data<=head1->data){
            p=head2;
            q=head2;
            head2=head2->next;
        }
        
        while(head1 && head2){
            if(head1->data < head2->data){
                q->next=head1;
                q=head1;
                head1=head1->next;
                q->next=NULL;
            }
            else if(head2->data <=head1->data){
                q->next=head2;
                q=head2;
                head2=head2->next;
                q->next=NULL;
            }
        }
        
        if(head1){
            q->next=head1;
        }
        
        if(head2){
            q->next=head2;
        }
        
        return p;
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
    Node *head1=inputLL();
    Node *head2=inputLL();
    Node *anshead=mergeTwoSortedLL(head1, head2);
    printLL(anshead);
}

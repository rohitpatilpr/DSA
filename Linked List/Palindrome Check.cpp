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
   
bool isPalindrome(Node *head){
    if(head==NULL){
        true;
    }
    
    Node *p=head;
    int mid=length(head)/2;
    for(int i=1; i<mid; i++){
        p=p->next;
    }
    
    Node *head2=p->next;
    head2=reverseLL(head2);
    
    while(head && head2){
        if(head->data!=head2->data){
            return false;
        }
        else{
            head=head->next;
            head2=head2->next;
        }
    }
    return true;
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
    bool ans=isPalindrome(head);
    cout<<ans;
}

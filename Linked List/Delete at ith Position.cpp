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

Node *deleteAtIthPosition(Node *head, int pos, int len){
        
        Node *temp=head;
        int count=0;
        
        if(pos<0 || pos>=len){}
        else if(pos==0){
            head=head->next;
            delete temp;
            return head;
        }
        else{
            while(temp!=NULL && count<pos-1){
                temp=temp->next;
                count++;
            }
            
            if(temp!=NULL){
                Node *a=temp->next;
                Node *b=a->next;
                temp->next=b;
                delete a;
            }
            return head;
        }
        
        
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
    int i,data;
    cout<<"Enter Position of Node that you want to delete- "<<endl;
    cin>>i;
    int len=length(head);
    head=deleteAtIthPosition(head ,i, len);
    printLL(head);
    
}

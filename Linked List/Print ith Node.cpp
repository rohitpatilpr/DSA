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

int position(Node *head, int i){
        Node *temp=head;
        int count=1;
        
        while(temp!=NULL){
            if(count==i){
                return temp->data;
            }
            temp=temp->next;
            count++;
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
    int i;
    cout<<"Enter Position of the Node You Want- "<<endl;
    cin>>i;
    int pos=position(head,i);
    cout<<"Enter Position of the Node You Want- "<<pos;
    
}

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

int main() {
    Node *n1=new Node(10);
    Node *n2=new Node(20);
    
    Node *head=n1;
    n1.next=n2;
    
    cout<<head->data<<endl;
    cout<<head->next->data;
}

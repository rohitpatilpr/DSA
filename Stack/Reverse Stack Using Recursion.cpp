class Solution{
public:

    void insertAtBottom(stack<int> &St,int X){
        if(St.empty()){
            St.push(X);
            return;
        }
        
        int num=St.top();
        St.pop();
        
        insertAtBottom(St, X);
        St.push(num);
    }
    
    void Reverse(stack<int> &St){
        if(St.empty()){
            return;
        }
        
        int num=St.top();
        St.pop();
        
        Reverse(St);
        insertAtBottom(St, num);
    }
};

class Solution
{
    public:
    void solver(stack<int>&s, int sizeOfStack, int count){
        //base case
        if(count==sizeOfStack/2){
            s.pop();
            return;
        }
        
        int num=s.top();
        s.pop();
        
        solver(s, sizeOfStack, count+1);
        s.push(num);
        
    }
    
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int count=0;
        solver(s, sizeOfStack, count);
    }
};

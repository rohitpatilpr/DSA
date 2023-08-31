void sortedInsert(stack<int> &s, int num){
    if(s.empty() || (s.top() < num)){
        s.push(num);
        return;
    }
    
    int n= s.top();
    s.pop();
    
    //Recursive call
    sortedInsert(s, num);
    s.push(n);
}

void SortedStack :: sort()
{
   if(s.empty()){
       return;
   }
   
   int num=s.top();
   s.pop();
   
   sort();
   sortedInsert(s, num);
}

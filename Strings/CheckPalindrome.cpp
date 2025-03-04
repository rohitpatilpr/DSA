#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s;
    getline(cin,s);
    int len=s.length();
    
    int i=0, j=len-1;
    
    while(i<=j)
    {
        if(s[i] != s[j])
        {
            cout<<"not palindrome";
            exit(1);
        }
        else{
            i++;
            j--;
        }
    }
    
    cout<<"palindrome";
	
}

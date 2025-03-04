#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s;
    char c1, c2;
    getline(cin,s);
    cin>>c1>>c2;
    
    int len=s.length();
    
    for(int i=0; i < len; i++)
    {
        if(s.at(i) == c1)
        {
            s.at(i) = c2;
        }
    }
    
    cout<<s;
    
}

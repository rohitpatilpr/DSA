#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s;
    int count=0;
    
    getline(cin,s);
    
    int len=s.length();
    
    for(int i=0; s[i] != '\0'; i++){
        count++;
    }
    
    cout<<len<<endl<<count;
	
}

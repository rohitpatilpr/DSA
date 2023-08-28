#include <iostream>
#include <cstring>
using namespace std;

int HighestOccurChar(char str[]){
    int size=strlen(str);
    int freq[256]={0};
    
    for(int i=0; i<size; i++){
        int fc=int(str[i]);
        freq[fc]=freq[fc]+1;
    }
    
    int max=str[0];
    for(int i=1; i<size; i++){
        if(freq[str[i]]>freq[max]){
            max=str[i];
        }
    }
    
    return char(max);
}

int main() {
    char str[10];
    cout<<"Enter a String-"<<endl;
    cin>>str;
    
    char ans=HighestOccurChar(str);
    cout<<ans;
}

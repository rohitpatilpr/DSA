#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;

void printAllSubstrings(char str[], int size){
    for(int j=0; str[j]!='\0'; j++){
        for(int k=j; str[k]!=0; k++){
            int start=j, end=k;
            char output[100];
            int x=0;
            for(int i=start; i<=end; i++){
            output[x]=str[i];
            x++;
            }
            output[x]='\0';
            cout<<output<<endl;
        }
    }
    
}


int main() {
    char str[100];
    cout<<"Enter a String-"<<endl;
    cin.getline(str,100);
    
    int size=strlen(str);
    
    printAllSubstrings(str, size);

    return 0;
}

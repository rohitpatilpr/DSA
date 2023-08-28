#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;

void printPrefixes(char str[], int size){
    for(int i=0; str[i]!='\0'; i++){
        for(int j=0; j<=i; j++){
            cout<<str[j];
        }
        cout<<endl;
    }
}


int main() {
    char str[100];
    cout<<"Enter a String-"<<endl;
    cin.getline(str,100);
    
    int size=strlen(str);
    
    printPrefixes(str, size);

    return 0;
}

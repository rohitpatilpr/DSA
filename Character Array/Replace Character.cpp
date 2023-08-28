#include <iostream>
using namespace std;

void replaceChar(char str[], int size, char c1, char c2){
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==c1){
            str[i]=c2;
        }
    }
}

int length(char str[]){
    int count=0;
    for(int i=0; str[i]!='\0'; i++){
        count++;
    }
    return count;
}

int main() {
    char str[10];
    cout<<"Enter a String-"<<endl;
    cin>>str;
    
    char c1,c2;
    cout<<"Replace which character which one- ";
    cin>>c1>>c2;
    
    int size=length(str);
    
    replaceChar(str, size, c1, c2);
    
    cout<<str;

    return 0;
}

#include <iostream>
using namespace std;

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
    
    cout<<"Length of string is "<<length(str);

    return 0;
}

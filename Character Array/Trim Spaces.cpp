#include <iostream>
#include <cstring>
using namespace std;

void trimSpaces(char str[], int size){
    int i=0;
    int j=0;
    
    while(i<size-1){
        if(str[i]!=' '){
            str[j]=str[i];
            j++;
        }
            i++;
    }
    
    str[j]='\0';
}

int main() {
    char str[10];
    cout<<"Enter a String-"<<endl;
    cin.getline(str,1000);
    
    int size=strlen(str);
    
    trimSpaces(str, size);
    
    cout<<str;

    return 0;
}

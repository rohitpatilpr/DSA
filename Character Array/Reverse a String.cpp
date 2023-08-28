#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char str[], int size){
    int i=0;
    int j=size-1;
    
    while(i<=j){
        int temp=str[j];
        str[j]=str[i];
        str[i]=temp;
        i++;
        j--;
    }
}

int main() {
    char str[10];
    cout<<"Enter a String-"<<endl;
    cin>>str;
    
    int size=strlen(str);
    
    reverseString(str, size);
    
    cout<<str;

    return 0;
}

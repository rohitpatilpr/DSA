#include <iostream>
using namespace std;

bool checkPalindrome(char str[], int size){
    int i=0;
    int j=size-1;
    
    while(i<=j){
        if(str[i]!=str[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    
    return true;
    
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
    
    int size=length(str);
    
    cout<<checkPalindrome(str, size);

    return 0;
}

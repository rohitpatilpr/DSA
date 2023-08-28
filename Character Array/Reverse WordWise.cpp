#include <iostream>
#include <bits/stdc++.h>
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

void reverseWords(char str[], int start, int end){
    while(start<=end){
        swap(str[start++],str[end--]);
    }
}

void reverseStringWordWise(char str[], int size){
    //Reverse whole string
    reverseString(str,size);
    
    //Reverse Individual Words
    int start=0, end=0;
    
    for(int i=0; i<size-1; i++){
        if(str[i]==' '){
            end=i-1;
            reverseWords(str, start, end);
            
            //Update i&j for next iteration
            start=i+1;
            end=i+1;
            
        }
    }
    
    //for last string which does not have space at the end
    end=size-1;
    reverseWords(str, start, end);
}

int main() {
    char str[100];
    cout<<"Enter a String-"<<endl;
    cin.getline(str,100);
    
    int size=strlen(str);
    
    reverseStringWordWise(str, size);
    
    cout<<str;

    return 0;
}

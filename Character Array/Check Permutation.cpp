#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char str1[], char str2[]){
    int size1=strlen(str1);
    int size2=strlen(str2);
    int freq[256]={0};
    
    if(size1!=size2){
        return false;
    }
    
    //Updating Frequency from 0 to 1
    for(int i=0; i<size1; i++){
        int fc=int(str1[i]);
        freq[fc]=freq[fc]+1;
    }
    
    //Frequency back to zero for same elements
    for(int j=0; j<size2; j++){
        int fc=int(str2[j]);
        freq[fc]=freq[fc]-1;
    }
    
    for(int i=0; i<=255; i++){
        if(freq[i]!=0){
            return false;
        }
    }
    
    return true;
}

int main() {
    char str1[10],str2[10];
    cout<<"Enter 2 Strings-"<<endl;
    cin>>str1>>str2;
    
    cout<<isPermutation(str1, str2);
}

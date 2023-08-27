#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a Number-"<<endl;
    cin>>n;
    
    int reversedNum=0;
    for(; n>0; n=n/10){
        int lastDigit=n%10;
        reversedNum=(reversedNum*10)+lastDigit; // multiplied by 10 for moving to next place
    }
    
    cout<<"Reversed-"<<reversedNum;
}

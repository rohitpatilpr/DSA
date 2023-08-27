// N/10-last digit delete
//N%10-last digit take
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout<<"Enter a Number-"<<endl;
    cin>>n;
    int sumeven=0,sumodd=0;
    
    for(; n>0; n=n/10){
        int lastdigit=n%10;
        if(lastdigit%2==0){
            sumeven+=lastdigit;
        }
        else{
            sumodd+=lastdigit;
        }
    }
    
    cout<<"even sum-"<<sumeven<<endl;
    cout<<"odd sum-"<<sumodd<<endl;
}

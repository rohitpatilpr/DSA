#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a Number-"<<endl;
    cin>>n;
   
    //starting fibonacci
    int a=1,b=1;
    for(int i=1; i<=n; i++){
        if(i==n){
            cout<<a;
        }
        
        int c=a+b;
        a=b;
        b=c;
    }
}

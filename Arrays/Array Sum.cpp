#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of Array-"<<endl;
    cin>>n;
    int arr[n];
    
    cout<<"Enter Array elements by giving space in between-"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int sum=0;
    for(int i=0; i<n; i++){
            sum+=arr[i];
        }
    
    cout<<"Sum is- "<<sum<<endl;
}

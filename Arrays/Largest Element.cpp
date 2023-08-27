#include <iostream>
#include <climits>
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
    
    int max=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    
    cout<<"Largest Element is- "<<max<<endl;
}

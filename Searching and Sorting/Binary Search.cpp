#include <iostream>
using namespace std;

void input(int arr[],int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

int binarySearch(int arr[], int n, int val){
    int start=0;
    int end=n-1;
    
    while(start<=end){
        int mid=(start+end)/2;
        
        if(arr[mid]==val){
            return mid;
        }
        else if(arr[mid]<val){
            start=mid+1;
        }
        else if(arr[mid]>val){
            end=mid-1;
        }
    }
    
    return -1;
}

int main() {
    int n;
    cout<<"Enter Size of Array-"<<endl;
    cin>>n;
    int arr[n];
    
    input(arr,n); //Function to Take Input
    
    int val;
    cout<<"Search Value-"<<endl;
    cin>>val;
    
    int ans=binarySearch(arr,n,val); 
    cout<<ans;

    return 0;
}

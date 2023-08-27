#include <iostream>
#include <climits>
using namespace std;

void intersection(int arr[], int arr2[], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i]==arr2[j]){
                cout<<arr[i]<<endl;
                arr2[j]=INT_MIN;
                break;
            }
        }
    }
}

int main() {
    int n,m;
    cout<<"Enter Size of Array1-"<<endl;
    cin>>n;
    cout<<"Enter Size of Array2-"<<endl;
    cin>>m;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int arr2[m];
    for(int i=0; i<m; i++){
        cin>>arr2[i];
        
    }
    
    intersection(arr,arr2,n,m); //Function to Reverse Array

    return 0;
}

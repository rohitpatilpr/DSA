#include <iostream>
using namespace std;

void input(int arr[],int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int curr=arr[i];
        int j;
        for(j=i-1; j>=0; j--){
           if(arr[j]>curr){
               arr[j+1]=arr[j];
           }
           else{
               break;
           }
        }
        
        arr[j+1]=curr;
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n;
    cout<<"Enter Size of Array-"<<endl;
    cin>>n;
    int arr[n];
    
    input(arr,n);
    
    insertionSort(arr,n);
    
    printArray(arr,n);

    return 0;
}

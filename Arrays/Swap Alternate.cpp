#include <iostream>
using namespace std;

void input(int arr[],int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void swapAlternate(int arr[], int n){
    for(int i=0; i<n; i=i+2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
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
    
    input(arr,n); //Function to Take Input
    
    swapAlternate(arr,n); //Function to Reverse Array
    
    printArray(arr,n);

    return 0;
}

#include <iostream>
using namespace std;

void input(int arr[],int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void sort01(int arr[], int n){
    int i=0;
    int j=n-1;
    
    while(i<=j){
        if(arr[i]==1 && arr[j]==0){
            arr[i]=0;
            arr[j]=1;
        }
        
        if(arr[i]==0){
            i++;
        }
        else{
            j--;
        }
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
    
    sort01(arr,n); //Function to Reverse Array
    
    printArray(arr,n);

    return 0;
}

#include <iostream>
using namespace std;

void input(int arr[],int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void findUnique(int arr[], int n){
    for(int i=0; i<n; i++){
        int j;
        for(j=0; j<n; j++){
            if(arr[i]==arr[j] && i!=j){
                break;
            }
        }
    
    if(j==n){
        cout<<"unique-"<<arr[i]<<endl;
    }    
    }
}

int main() {
    int n;
    cout<<"Enter Size of Array-"<<endl;
    cin>>n;
    int arr[n];
    
    input(arr,n); //Function to Take Input
    
    findUnique(arr,n); //Function to Reverse Array

    return 0;
}

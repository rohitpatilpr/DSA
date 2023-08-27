#include <iostream>
using namespace std;

void input(int arr[],int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min=arr[i];
        int minIndex=i;
        
        for(int j=i+1; j<n; j++){
            if(arr[j]<min){
                min=arr[j];
                minIndex=j;
            }
        }
        
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
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
    
    selectionSort(arr,n);
    
    printArray(arr,n);

    return 0;
}

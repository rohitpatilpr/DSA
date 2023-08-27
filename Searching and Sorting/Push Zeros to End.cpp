#include <iostream>
using namespace std;

void input(int *arr,int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void pushZerosToEnd(int arr[], int n){
    int i=0,j=0;
    while(i<n){
        if(arr[i]==0){
            i++;
            continue;
        }
        else{
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            i++;
            j++;
        }
    }

}

void printArray(int *arr, int n){
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

    pushZerosToEnd(arr, n);
    
    printArray(arr,n);

    return 0;
}

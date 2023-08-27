#include <iostream>
#include <climits>
using namespace std;

void input(int *arr,int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void secondLargest(int arr[], int n){
    int largest=INT_MIN;
    int secLargest=INT_MIN;
    
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            secLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secLargest && arr[i]!=largest){
            secLargest=arr[i];
        }
    }
    
    cout<<"second largest is "<<secLargest;

}

/* void printArray(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
} */

int main() {
    int n;
    cout<<"Enter Size of Array-"<<endl;
    cin>>n;
    
    int arr[n];
    
    input(arr,n);

    secondLargest(arr, n);
    
    //printArray(arr,n);

    return 0;
}

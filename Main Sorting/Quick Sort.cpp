#include <iostream>
using namespace std;

int partition(int arr[], int start, int end){
    int pivot=arr[start];
    int count=0;
    
    //placing at right place
    for(int i=start+1; i<=end; i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex=start+count;
    swap(arr[start],arr[pivotIndex]);
    
    //Left and Right part handelling
    int i=start;
    int j=end;
    
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        
        while(arr[j]>pivot){
            j--;
        }
        
        while(i<pivotIndex && j>pivotIndex){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        
    }
    
    return pivotIndex;
}

void quickSort(int arr[], int start, int end){
    if(start>=end){
        return;
    }
    
    //partitioning
    int p=partition(arr, start, end);
    
    //sort left part
    quickSort(arr, start, p-1);
    
    //sort right part
    quickSort(arr, p+1, end);
    
}

void input(int arr[],int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
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
    
    quickSort(arr, 0, n-1);
    
    printArray(arr,n);

    return 0;
}

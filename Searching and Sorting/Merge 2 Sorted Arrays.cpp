#include <iostream>
using namespace std;

void input(int *arr,int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void merge(int arr1[], int arr2[], int n, int m, int ans[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            ans[k]=arr1[i];
            k++;
            i++;
        }
        else
        {
            ans[k]=arr2[j];
            k++;
            j++;
        }
    }
    
    while(i<n){
        ans[k]=arr1[i];
        k++;
        i++;
    }
    
    while(j<m){
        ans[k]=arr2[j];
        k++;
        j++;
    }
}

void printArray(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n,m;
    cout<<"Enter Size of both Arrays-"<<endl;
    cin>>n;
    cin>>m;
    
    int arr1[n];
    int arr2[m];
    
    input(arr1,n);
    input(arr2,m);
    
    int size=n+m;
    int ans[size];
    merge(arr1, arr2, n, m, ans);
    
    printArray(ans,size);

    return 0;
}

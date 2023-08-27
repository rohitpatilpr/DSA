#include <iostream>
using namespace std;

void input(int arr[],int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

int pairSum(int arr[], int n, int sum){
    int count=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==sum){
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cout<<"Enter Size of Array-"<<endl;
    cin>>n;
    int arr[n];
    
    input(arr,n); //Function to Take Input
    
    int sum;
    cout<<"Give Sum-"<<endl;
    cin>>sum;
    
    int countreturn = pairSum(arr,n,sum); 
    cout<<countreturn;

    return 0;
}

#include <iostream>
using namespace std;

void input(int arr[],int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

int Tripletsum(int arr[], int n, int sum){
    int count=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
              if(arr[i]+arr[j]+arr[k]==sum){
                count++;
            }
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
    
    int countreturn = Tripletsum(arr,n,sum); 
    cout<<countreturn;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of Array-"<<endl;
    cin>>n;
    int arr[n];
    int x;
    cout<<"Enter the No. You want to search-"<<endl;
    cin>>x;
    
    cout<<"Enter Array elements by giving space in between-"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int i;
    for(i=0; i<n; i++){
            if(arr[i]==x){
                cout<<i;
                break;
            }
        }
        
     if(i==n){
            cout<<"-1";
      }

      return 0;        
}

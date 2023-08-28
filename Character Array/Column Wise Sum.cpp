#include <iostream>
using namespace std;

void input(int str[][100], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>str[i][j];
        }
    }
    
}

void colnwiseSum(int str[][100], int n, int m){
    int sum=0;
    for(int j=0; j<n; j++){
        for(int i=0; i<m; i++){
            sum+=str[i][j];
        }
        cout<<sum<<" ";
        sum=0;
    }
    
}


int main() {
    int matrix[100][100];
    int n,m;
    cout<<"Enter size of Matrix-"<<endl;
    cin>>n>>m;
    
    input(matrix, n, m);
    
    colnwiseSum(matrix, n, m);

    return 0;
}

#include <iostream>
using namespace std;

void input(int str[][100], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>str[i][j];
        }
    }
    
}

void printArrayRowWise(int str[][100], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<str[i][j]<<" ";
        }
        cout<<endl;
    }
    
}


int main() {
    int matrix[100][100];
    int n,m;
    cout<<"Enter size of Matrix-"<<endl;
    cin>>n>>m;
    
    input(matrix, n, m);
    
    printArrayRowWise(matrix, n, m);

    return 0;
}

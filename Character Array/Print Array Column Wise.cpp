#include <iostream>
using namespace std;

void input(int str[][100], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>str[i][j];
        }
    }
    
}

void printArrayColnWise(int str[][100], int n, int m){
    for(int j=0; j<n; j++){
        for(int i=0; i<m; i++){
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
    
    printArrayColnWise(matrix, n, m);

    return 0;
}

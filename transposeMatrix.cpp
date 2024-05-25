#include<iostream>
using namespace std;

int main(){
    cout << "ENter row and column\n";
    int r, c;
    cin >> r >> c;
    int arr[r][c];
    int transpose[5][5];
    cout << "Enter element in the array\n";
    for(int  i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> arr[i][j];
        }
    }
    
    cout << "Show element of the array\n";
    
    for(int  i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << arr[i][j];
            if(j==c-1){
                cout << endl;
            }
        }
    }
    
    cout << "computing transpose\n";
    for (int i = 0; i < r; ++i)
      for (int j = 0; j < c; ++j) {
         transpose[j][i] = arr[i][j];
      }
    
    cout << "Show transpose of the matrix\n";
    for(int  i=0; i<c; i++){    
        for(int j=0; j<r; j++){ 
            cout << transpose[i][j];
            if(j==r-1){
                cout << endl;
            }
        }
    }
    return 0;
}

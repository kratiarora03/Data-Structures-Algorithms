#include <iostream>

using namespace std;
RowWiseSumm(int arr[][4], int row, int col){
    for(int i=0;i<row; i++){
        int sum=0;
    for(int j=0;j<col; j++){
        sum = sum + arr[i][j];
    }
    cout<<sum<<endl;
    }
    
}
int main(){
    int arr[][4]= {
        {0,1,2,3},
        {1,2,3,5},
        {2,3,4,5},
    };
    int row=3;
    int col=4;

RowWiseSumm(arr, row, col);
}

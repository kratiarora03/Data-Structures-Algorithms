#include <iostream>
#include <limits.h>

using namespace std;
int findMin(int arr[][4], int row, int col){
    int minAns = INT_MAX;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]<minAns){
                minAns = arr[i][j];
            }
        }
    }
    return minAns;
}

int main(){
    int arr[][4]= {
        {0,1,2,3},
        {4,5,6,10},
        {19,0,4,6}
    };
    int row= 3;
    int col=4;

    cout<<"the minimim number in the array is "<<findMin(arr,row,col)<<endl;
}
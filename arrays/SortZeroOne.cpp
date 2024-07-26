#include <iostream>

using namespace std;
void SortZeroOne(int arr[], int n){
    //count zero and one
    int CountZero= 0;
    int CountOne=0;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            CountZero++;
    }if(arr[i]==1){
        CountOne++;
    } }

    //place zero and one 
    int index = 0;
    while(CountZero--){
        arr[index]=0;
        index++;
    }
    while(CountOne--){
        arr[index]=1;
        index++;}
}
int main(){
    int arr[]= {0,0,0,1,1,0,1,1,0,1,0,1,0};
    int n = 13;
    SortZeroOne(arr,n);

    for(int i=0; i<n; i++){
        cout <<arr[i] << " ";
    }
}
#include <iostream>
using namespace std;

void doubleArray(int arr[], int size , int index ){
    // base case 
    if(index>=size){
        return ;
    }

    //processing 
    arr[index] = 2*arr[index];

    //recursive call
    doubleArray(arr, size , index+1);
}

int main(){
    int arr[] = {10,20,30};
    int size= 3;
    int index = 0; 

    doubleArray(arr, size , index);
    //printing the array
    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
}
}
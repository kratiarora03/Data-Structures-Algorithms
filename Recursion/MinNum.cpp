#include <iostream>
#include <limits.h>
using namespace std;

void findMin(int arr[] , int size , int index , int &mini){
    if(index >=size){
        return;
    }

    mini = min(mini, arr[index]);

    findMin(arr,index+1,size,mini);
}

int main(){
    int arr[] = {10,20,30,40,50};
    int size = 5; 
    int index = 0; 
    int mini = INT_MAX;

    findMin(arr , size , index , mini);
    cout<<"Min: "<<mini<<endl;
}
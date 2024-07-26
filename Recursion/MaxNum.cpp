#include <iostream>
#include <limits.h>
using namespace std;

void FindMax(int arr[] , int size , int index , int &maxx){
    //base case 
    if(index >=size){
        return ; 
    }
     //processing 
    maxx = max(maxx, arr[index]);
    //recursive call 
    FindMax(arr , size , index+1 , maxx);
}

int main(){
    int arr[] = {10,20,30,40,50 };
    int size = 5; 
    int index = 0; 
    int maxx = INT_MIN;

    FindMax(arr , size , index , maxx); 
    cout<<maxx<<endl;
}
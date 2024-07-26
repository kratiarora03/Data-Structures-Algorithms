#include <iostream>
using namespace std;

bool checkSorted(int arr[] , int size , int index){
    if(index>=size){
      return true;
    }

    if(arr[index]< arr[index-1]){
        return false;
    }

   return  checkSorted(arr , size , index+1);
}

int main(){
    int arr[] = {10,20,30,40};
    int size = 4; 
    int index = 1;

    
    if (checkSorted(arr, size, index)) {
        cout << "array is sorted" << endl;
    } else {
        cout << "array is not sorted" << endl;
    }
}

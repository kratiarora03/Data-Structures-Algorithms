#include <iostream>
using namespace std;

 void moveNegatives(int arr[], int size ){
    int left = 0; 
    int right = size-1;

    while(left<=right){
        if(arr[left] <0){
            left++;
        }else if(arr[right] >=0){
            right--;
        }else {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
   
 }

int main(){
    int arr[] = {-1,-2,3,-2,4};
    int size = 5;
     moveNegatives(arr, size);

     for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
     }
}
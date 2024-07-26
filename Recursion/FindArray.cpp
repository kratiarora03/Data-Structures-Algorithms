#include <iostream>
using namespace std;

int findIndex(int arr[] , int size , int index , int target){
    //base case 
    if(index>=size){
        return -1;
    }

    //processing 
    if(arr[index]==target){
        cout<<"index "<<index<<endl;
        }

    //recursive call 
    findIndex(arr, size, index+1, target);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = 7; 
    int index = 0; 
    int target = 14; 
    
    findIndex(arr, size, index, target);

}
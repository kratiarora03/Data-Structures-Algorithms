#include <iostream>
using namespace std;

int binSearch(int arr[] , int s , int e, int target){
    //base case 
    if(s>e){
        return -1;
    }

    int mid=s+(e-s)/2;
    if(arr[mid] == target){
        return mid;
    }

   if (arr[mid] < target) {
        return binSearch(arr, mid + 1, e, target);
    } else { 
        return binSearch(arr, s, mid - 1, target);
    }
}

int main(){
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    int start = 0;
    int end = size-1;
int target = 40; 

int foundIndex = binSearch(arr, start , end , target);

if(foundIndex != -1){
    cout<<"Found at index:"<< foundIndex << endl;
}else{
    cout<<"element not found"<<endl;
}

}
#include <iostream>
using namespace std;

int Maximum(int arr[], int size){
    int ans = arr[0]; 
    for(int i = 1; i < size; i++){ 
        if(arr[i] > ans){
            ans = arr[i];
        }
    }
    return ans;
}
int main(){
    int arr[] = {1,4,3,2,7};
    int index = 0; 
    int size = 5; 

    cout<<"the maximum number is " << Maximum(arr,size) << endl;

}
#include <iostream>
#include <vector>
using namespace std;

void solve(int *arr , int size , int index , vector<int> &ans){
    //base case 
    if(index>=size){
        return;
    }

    //processing 
    if(arr[index] %2 == 0){
        ans.push_back(arr[index]);
    }

    //recusrsive call 
    solve(arr, size, index+1 , ans);
}

int main(){
    int arr[]= {2,3,4,5,6,7,8};
    int size = 7; 
    int index = 0; 
    vector<int> ans; 
    solve(arr, size, index, ans);

   for(int num : ans){
    cout << num << " " <<endl;
   }
}
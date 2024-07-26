#include <iostream>

using namespace std;

bool palindrome(int arr[], int n ){
    int i = 0;
    int j = n-1;

    while(i>=j){
        if(arr[i]== arr[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
        }
        return true;
}

// int findLength(int arr[], int size) {
//     int length = 0;
//     for (int i = 0; i < size; i++) {
//         if (ch[i] == '\0') {
//             break;
//         } else {
//             length++;
//         }
//     }
//     return length;
//}

int main(){
    int arr[] = {1,1,2,1,1};
    int n = 5; 
     
 
     bool check = palindrome(arr , n);
     if(check){
        cout << "valid palindrome" << endl;
     } else {
        cout << "invalid palindrome" << endl;
     }


}
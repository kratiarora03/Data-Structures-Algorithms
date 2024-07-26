#include <iostream>
int main(){
    //created an array
    int arr[5];
    int n=5;
    //user inpu the values of th array
    for (int i = 0; i < n ; ++i) {
        std::cout << "Enter value for index " << i << ": ";
        std::cin >> arr[i];
    }
    //finding the sum 
    int sum=0;
    for (int i = 0; i < n; ++i) {
     sum = sum + arr[i];
    }
    // printing the sum
    std::cout << sum;
}
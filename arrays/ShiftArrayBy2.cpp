#include <iostream>

using namespace std;

void shift(int arr[], int n) {
    //temp 
    int temp[2] = {arr[n - 2], arr[n - 1]};
    //shift right
    for (int i = n - 1; i >= 2; i--) {
        arr[i] = arr[i - 2];
    }
    //copy temp into 0th and 1st index
    arr[0] = temp[0];
    arr[1] = temp[1];
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    shift(arr, n);

    //printing
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}


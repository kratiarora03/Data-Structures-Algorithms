#include <iostream>

using namespace std;

void shift(int arr[], int n) {
    //temp 
    int temp = arr[0];
    //shift left
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    //copy temp into (n-1)th index
    arr[n - 1] = temp;
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


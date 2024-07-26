#include <iostream>
using namespace std;

void shiftNegative(int arr[], int n) {
    int j = 0;  // memory block where negative numbers can be stored
    for (int index = 0; index < n; index++) {
        if (arr[index] < 0) {
            if (index != j) // to avoid swapping same element
                swap(arr[index], arr[j]);
            j++;
        }
    }
}

int main() {
    int arr[] = {23, -7, 12, -10, 11, 40, 60}; // Added missing comma
    int n = 7;

    shiftNegative(arr, n);

    cout << "Printing the array" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}

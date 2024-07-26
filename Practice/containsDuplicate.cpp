#include <iostream>
using namespace std;

bool checkDuplicate(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]); // calculate the size of the array
    bool hasDuplicate = checkDuplicate(arr, n);
    if (hasDuplicate) {
        cout << "Duplicate found!" << endl;
    } else {
        cout << "No duplicates." << endl;
    }
    return 0;
}

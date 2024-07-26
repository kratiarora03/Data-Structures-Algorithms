#include <iostream>

using namespace std;

int linearSearch(int arr[], int target, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1; // Return -1 if the target element is not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int target = 40;
    int n = 5;

    int index = linearSearch(arr, target, n);
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }
    
    return 0;
}

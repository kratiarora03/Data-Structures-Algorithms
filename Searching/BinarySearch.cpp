#include <iostream>

using namespace std;

int binarySearch(int arr[], int target, int n) {
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;

    while (start <= end) {
        if (arr[mid] == target) {
            return mid;
        } else if (target > arr[mid]) {
            start = mid + 1;
        } else { // target < arr[mid]
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 60, 70, 80, 90};
    int target = 70;
    int n = 8;

    int ansIndex = binarySearch(arr, target, n);

    if (ansIndex == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element Found at Index : " << ansIndex << endl;
    }

    return 0;
}

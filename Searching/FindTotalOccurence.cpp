#include <iostream>

using namespace std;

int findFirst(int arr[], int target, int n) {
    int start = 0;
    int end = n - 1;
    int mid, ans = -1;

    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            ans = mid;
            end = mid - 1;
        } else if (target > arr[mid]) {
            start = mid + 1;
        } else { // target < arr[mid]
            end = mid - 1;
        }
    }
    return ans;
}

int findLast(int arr[], int target, int n) {
    int start = 0;
    int end = n - 1;
    int mid, ans = -1;

    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            ans = mid;
            start = mid + 1;
        } else if (target > arr[mid]) {
            start = mid + 1;
        } else { // target < arr[mid]
            end = mid - 1;
        }
    }
    return ans;
}

int totalOccurrence(int arr[], int n, int target) {
    int firstOcc = findFirst(arr, target, n);
    if (firstOcc == -1)
        return 0;
    int lastOccurrence = findLast(arr, target, n);
    return lastOccurrence - firstOcc + 1;
}

int main() {
    int arr[] = {10, 20, 30, 30, 30, 30, 30, 40, 50};
    int n = 9;
    int target = 30;

    int solve = totalOccurrence(arr, n, target);
    cout << "total occurrence is: " << solve << endl;
    return 0;
}

#include <iostream>

using namespace std;

int findMissingElement(int arr[], int n) {
    int s = 0;
    int e = n - 1;
    int mid, ans = -1;

    while (s <= e) {
        mid = s + (e - s) / 2;
        int diff = arr[mid] - mid;

        if (diff == 1) {
            s = mid + 1; // Move to the right side
        } else {
            ans = mid; // Store the potential missing element index
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 7, 8, 9}; // 6 is missing
    int n = sizeof(arr) / sizeof(arr[0]);

    int missingIndex = findMissingElement(arr, n);
    if (missingIndex != -1) {
        cout << "Missing element is: " << missingIndex + 1 << endl;
    } else {
        cout << "No missing element found" << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

int searchIndex(int arr[], int n, int target) {
    int s = 0; 
    int e = n - 1; 

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (mid - 1 >= 0 && arr[mid - 1] == target) {
            return mid - 1;
        }
        else if (arr[mid + 1] == target) {
            return mid + 1;
        }
        else if (target > arr[mid]) {
            s = mid + 2;
        }
        else {
            e = mid - 2;
        }
    }
    return -1;
}

int main() {
    int arr[] = {20, 10, 30, 40, 40, 70, 60};
    int n = 7;
    int target = 70;

    int result = searchIndex(arr, n, target);

    if (result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index: " << result << endl;
    }

    return 0;
}

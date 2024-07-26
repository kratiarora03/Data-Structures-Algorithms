    #include <iostream>

using namespace std;

int findlast(int arr[], int target, int n) {
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int ans = -1;

    while (start <= end) {
        if (arr[mid] == target) {
            ans = mid;
            start = mid+1; 
        } else if (target > arr[mid]) {
            start = mid + 1;
        } else { // target < arr[mid]
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

int main() {
    int arr[] = {10, 30, 30, 30, 60, 70, 80, 90};
    int target = 30;
    int n = 8;

    int ansIndex = findlast(arr, target, n);

    if (ansIndex == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element Found at Index : " << ansIndex << endl;
    }

    return 0;
}
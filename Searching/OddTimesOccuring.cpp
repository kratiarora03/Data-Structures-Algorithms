#include <iostream>

using namespace std;

int findOddOccurring(int arr[], int n) {
    int s = 0; 
    int e = n-1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (s == e) {
            return arr[s];
        }

        if ((e - mid) % 2 == 0) {
            if (arr[mid] == arr[mid + 1]) {
                s = mid + 2;
            } else {
                e = mid;
            }
        } else {
            if (arr[mid] == arr[mid + 1]) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
    }
    return -1; // If no element occurring odd times is found
}

int main() {
    int arr[] = {2, 2, 5, 5, 7, 7, 2, 6, 6, 8, 8};
    int n = 11;

    int ans = findOddOccurring(arr, n);

    if (ans != -1) {
        cout << "Element occurring odd times is: " << ans << endl;
    } else {
        cout << "No element occurring odd times found." << endl;
    }
    return 0;
}

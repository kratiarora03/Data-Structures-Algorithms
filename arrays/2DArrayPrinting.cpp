#include <iostream>

using namespace std;

void printArray(int arr[][3], int row, int col) {
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            cout << arr[j][i] << " "; // Access elements in column-wise order
        }
        cout << endl;
    }
}

int main() {
    int arr[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int row = 3;
    int col = 3;
    printArray(arr, row, col);

    return 0; // Added for completeness
}

#include <iostream>
#include <algorithm> 

using namespace std;

void printArray(int arr[][4], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void Transpose(int arr[][4], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = i; j < col; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

int main() {
    int arr[][4] = {
        {0, 1, 2, 3},
        {1, 2, 3, 4},
        {5, 3, 2, 4},
        {7, 8, 4, 5}
    };
    int row = 4;
    int col = 4;
    cout << "Original Array:" << endl;
    printArray(arr, row, col);
    Transpose(arr, row, col);
    cout << "Transposed Array:" << endl;
    printArray(arr, row, col);
    return 0;
}


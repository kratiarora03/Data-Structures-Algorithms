#include <iostream>

using namespace std;

bool findElement(int arr[][3], int row, int col, int target) {
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            if (arr[j][i] == target) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int row = 3;
    int col = 3;
    int target = 12;
    
    if (findElement(arr, row, col, target)) {
        cout << "Element found" << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}


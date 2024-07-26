#include <iostream>
using namespace std;

void sort012(int arr[], int size) {
    int count0 = 0, count1 = 0, count2 = 0;

   
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            count0++;
        } else if (arr[i] == 1) {
            count1++;
        } else {
            count2++;
        }
    }

  
    int index = 0;

   
    for (int i = 0; i < count0; i++) {
        arr[index++] = 0;
    }

    for (int i = 0; i < count1; i++) {
        arr[index++] = 1;
    }

    
    for (int i = 0; i < count2; i++) {
        arr[index++] = 2;
    }
}

int main() {
    int arr[] = {0, 1, 2, 0, 1, 2, 0, 0, 1, 2, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort012(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

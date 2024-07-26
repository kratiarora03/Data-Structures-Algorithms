#include <iostream>

int main() {
   
    int myArray[10];

   //user input the value of the array
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter value for index " << i << ": ";
        std::cin >> myArray[i];
    }
     //doubling the value of the array
    for (int i = 0; i < size; ++i) {
        myArray[i] *= 2;
    }

   //rinting the value of the array
    std::cout << "Doubled values in the array:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << myArray[i] << " ";
    }

    return 0;
}


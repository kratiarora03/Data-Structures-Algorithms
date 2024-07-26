#include <iostream>

using namespace std;

int findLength(char ch[], int size) {
    int length = 0;
    for (int i = 0; i < size; i++) {
        if (ch[i] == '\0') {
            break;
        } else {
            length++;
        }
    }
    return length;
}

int main() {
    
    char ch[10];

    cin.getline(ch, 10);

    int len = findLength(ch, 10);

    cout << len << endl;

    return 0;
}

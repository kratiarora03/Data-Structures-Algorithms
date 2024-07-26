#include <iostream>
using namespace std;

bool PalindromeCheck(string str, int start, int end) {
    // Base case
    if (start >= end) {
        return true;
    }

    // Check the characters at start and end
    if (str[start] != str[end]) {
        return false;
    }

    // Recursive call
    return PalindromeCheck(str, start + 1, end - 1);
}

int main() {
    string str = "racecar";
    int start = 0;
    int end = str.length() - 1;

    if (PalindromeCheck(str, start, end)) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}

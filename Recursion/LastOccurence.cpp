    
#include <iostream>
using namespace std;

int solve(string str, int index, char target) {
    // Base case
    if (index >= str.length()) {
        return -1;
    }

    // Recursive call
    int ans = solve(str, index + 1, target);

    // If the character matches and it's the first occurrence from the end, update ans
    if (ans == -1 && str[index] == target) {
        return index;
    }

    return ans;
}

int main() {
    string str = "abcddeg";
    int index = 0;
    char target = 'd';
    int result = solve(str, index, target);
    cout << "Last occurrence is at index: " << result << endl;
    return 0;
}

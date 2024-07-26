#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to solve the problem using recursion with memoization
int solve(int nums[], int size, int index, vector<int>& memo) {
    // Base case
    if (index >= size) {
        return 0;
    }

    // If the result is already calculated
    if (memo[index] != -1) {
        return memo[index];
    }

    // Option 1: Rob the current house and move to the house after the next one
    int option1 = nums[index] + solve(nums, size, index + 2, memo);
    // Option 2: Skip the current house
    int option2 = solve(nums, size, index + 1, memo);

    // Store the result in the memo array and return
    memo[index] = max(option1, option2);
    return memo[index];
}

int rob(int nums[], int size) {
    // Create a memoization array initialized with -1
    vector<int> memo(size, -1);
    // Start the recursive function from the first index
    return solve(nums, size, 0, memo);
}

int main() {
    int nums[] = {2, 3, 2};
    int size = sizeof(nums) / sizeof(nums[0]);

    int result = rob(nums, size);
    cout << "Maximum amount that can be robbed: " << result << endl;

    return 0;
}

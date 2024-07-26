#include <iostream>
#include <unordered_set>
#include <vector>

int findFirstRepeating(const std::vector<int>& nums) {
    std::unordered_set<int> seen;

    for (int num : nums) {
        if (seen.find(num) != seen.end()) {
            return num; // Found the first repeating element
        }
        seen.insert(num);
    }

    return -1; // If no repeating element is found
}

int main() {
    std::vector<int> nums = {3, 2, 1, 2, 2, 3};
    int firstRepeating = findFirstRepeating(nums);
    if (firstRepeating != -1) {
        std::cout << "First repeating element: " << firstRepeating << std::endl;
    } else {
        std::cout << "No repeating element found." << std::endl;
    }
    return 0;
}

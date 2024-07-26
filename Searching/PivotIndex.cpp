#include <iostream>
#include <vector>

int findPivotIndex(const std::vector<int>& nums) {
    int totalSum = 0;
    for (int num : nums) {
        totalSum += num;
    }

    int leftSum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (leftSum == totalSum - leftSum - nums[i]) {
            return i;
        }
        leftSum += nums[i];
    }

    return -1; // If pivot index is not found
}

int main() {
    std::vector<int> nums = {1, 7, 3, 6, 5, 6};
    int pivotIndex = findPivotIndex(nums);
    if (pivotIndex != -1) {
        std::cout << "Pivot index: " << pivotIndex << std::endl;
    } else {
        std::cout << "No pivot index found." << std::endl;
    }
    return 0;
}

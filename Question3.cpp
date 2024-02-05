#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <vector>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] == nums[i - 1]) {
            return true;
        }
    }

    return false;
}

int main() {
    // Example usage:
    vector<int> nums = {1, 2, 3, 4, 5, 1};
    cout << containsDuplicate(nums) << endl;  // Output: 1 (true)
    
    return 0;
}

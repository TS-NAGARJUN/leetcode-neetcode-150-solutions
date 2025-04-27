#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int size = nums.size();
        int i = 0, count = 0, k = 1;
        for (int j = 2; j < size; j++) {
            if (nums[i] + nums[j] == (nums[k] / 2.0)) {
                count += 1;
            }
            i++;
            k++;
        }
        return count;
    }
};

int main() {
    // Test case: example array
    vector<int> nums = {2, 8, 6, 1, 4};

    // Create instance of Solution
    Solution sol;

    // Call the function and print result
    int result = sol.countSubarrays(nums);
    cout << "Number of valid subarrays: " << result << endl;

    return 0;
}

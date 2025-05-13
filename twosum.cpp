class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++)
        {
            int search = target - nums[i];
            auto it = find(nums.begin()+i+1,nums.end(),search);
            if(it != nums.end())
            {
                return {i,it-nums.begin()};
            }
        }
        return {0,0};
    }
};

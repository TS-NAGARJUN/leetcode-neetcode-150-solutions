class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>uni;
        for(int i=0;i<nums.size();i++)
        {
            if(uni.find(nums[i]) != uni.end())
            {
                return true;
            }
            uni.insert(nums[i]);
        }
        return false;
    }
};

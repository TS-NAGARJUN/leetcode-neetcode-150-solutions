class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int max_len = 0; 
       set<int>cpy(nums.begin(),nums.end());
       int streak;
       for(auto num:nums)
       {
        if(!cpy.count(num-1))
        {
            int current = num;
            streak = 1;
            while(cpy.count(current+1))
            {
                current = current+1;
                streak += 1;
            }
            max_len = max(max_len , streak);
        }
       }
       return max_len; 
    }
};

class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set<int>res;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(abs(i-j)<=k && nums[j] == key)
                {
                    res.insert(i);
                }
            }
        }
        vector<int>ans;
        for(auto e:res)
        {
            ans.push_back(e);
        }
        return ans;
    }
};
class Solution {
    public:
        int findNumbers(vector<int>& nums) {
            int ans=0;
            for(auto num:nums)
            {
                int count = 0;
                int n = num;
                while(n)
                {
                    count+=1;
                    n /= 10; 
                }
                if(count % 2 == 0)
                {
                    ans+=1;
                }
            }
            return ans;
        }
    };
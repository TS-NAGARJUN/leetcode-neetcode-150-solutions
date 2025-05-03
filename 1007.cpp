class Solution {
    public:
        int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
            int res = INT_MAX;
            for(int i=1;i<=6;i++)
            {
                res = min(res,rotate(tops,bottoms,i));
                res = min(res,rotate(bottoms,tops,i));
            }
            return res == INT_MAX?-1:res;
        }
    
    private:
        int rotate(vector<int>& tops , vector<int>& bottoms , int target)
        {
            int count=0;
            for(int i=0;i<tops.size();i++){
            if(tops[i] == target){continue;}
            if(bottoms[i] == target)
            {
                count+=1;
            }
            else
            {
                return INT_MAX;
            }
            }
            return count;
        }
    };
class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
       const int mod = 1e9+7;
       int freq[26] = {0};
       for(char c : s)
       {
        freq[c-'a']+=1;
       }
       while(t--)
       {
        long long f25 = freq[25];
        long long f0 = freq[0];
        for(int i=25;i>=2;i-=1)
        {
            freq[i] = freq[i-1];
        }
        freq[0] = static_cast<int>(f25);
        f0 = (f0 + f25)%mod;
        freq[1] = static_cast<int>(f0);
       }
       return accumulate(freq,freq+26,0ll)%mod;
    }
};
class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        const int n = groups.size();
        if (n == 0) return {};

        vector<string> result;
        result.push_back(words[0]);
        int prevGroup = groups[0];

        for (int i = 1; i < n; ++i) {
            if (groups[i] != prevGroup) {
                result.push_back(words[i]);
                prevGroup = groups[i];
            }
        }

        return result;
    }
};

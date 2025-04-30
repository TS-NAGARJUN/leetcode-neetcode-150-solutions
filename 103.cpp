/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    public:
        vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
            if(root == nullptr)
            {
                return {};
            }
            vector<vector<int>>res;
            queue<TreeNode*>qt;
            qt.push(root);
            bool flag = true;
            while(!qt.empty())
            {
                int level = qt.size();
                vector<int>v(level);
                for(int i=0;i<level;i++)
                {
                    TreeNode* node = qt.front();
                    qt.pop();
                    int idx = flag ? i : level-i-1;
                    v[idx] = node->val;
                    if (node->left) qt.push(node->left);
                    if (node->right) qt.push(node->right);
                }
                res.push_back(v);
                flag = !flag;
            }
            return res;
        }
    };
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
        int maxDepth(TreeNode* root) {
            queue<TreeNode*>q;
            if(root == NULL){return 0;}
            int count = 0;
            q.push(root);
            while(!q.empty())
            {
                count+=1;
                int level = q.size();
                for(int i=0;i<level;i++)
                {
                    TreeNode* node = q.front();
                    q.pop();
                    if(node->left){q.push(node->left);}
                    if(node->right){q.push(node->right);}
                }
            }
            return count;
        }
    };
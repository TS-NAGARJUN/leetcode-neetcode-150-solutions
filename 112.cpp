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
        bool hasPathSum(TreeNode* root, int targetSum) {
            if(root == nullptr){return false;}
            return ispath(root,0,targetSum);
        }
        bool ispath(TreeNode*n1,int cursum,int targetSum)
        {
            if(n1 == NULL){return false;}
            cursum = cursum + n1->val;
            if(n1->left == nullptr && n1->right == nullptr)
            {
                return cursum == targetSum;
            }
            return ispath(n1->left,cursum,targetSum) || ispath(n1->right,cursum,targetSum);
        }
    };
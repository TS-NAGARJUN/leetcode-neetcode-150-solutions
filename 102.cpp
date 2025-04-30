class Solution {
    public:
        vector<vector<int>> levelOrder(TreeNode* root) {
            vector<vector<int>> res;
            if (root == nullptr) return res;
    
            queue<TreeNode*> qt;
            qt.push(root);
    
            while (!qt.empty()) {
                int levelSize = qt.size(); 
                vector<int> level;
    
                for (int i = 0; i < levelSize; ++i) {
                    TreeNode* curr = qt.front();
                    qt.pop();
    
                    level.push_back(curr->val);
    
                    if (curr->left) qt.push(curr->left);
                    if (curr->right) qt.push(curr->right);
                }
    
                res.push_back(level);
            }
    
            return res;
        }
    };
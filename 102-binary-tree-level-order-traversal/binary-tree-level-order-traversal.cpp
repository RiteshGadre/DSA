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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        queue<TreeNode*> q;

        if(!root) return result;

        q.push(root);

        while(!q.empty()) {
            vector<int> level;
            int n = q.size();

            for(int i=0; i<n; i++) {
                if(q.front()->left) q.push(q.front()->left);
                if(q.front()->right) q.push(q.front()->right);
                level.push_back(q.front()->val);
                q.pop();
            }
            
            printVec(level);
            result.push_back(level);
        }
        return result;
    }

    void printVec(vector<int> &temp) {
        for(int num : temp) {
            cout << num << ' ';
        }
        cout << endl;
    }
};
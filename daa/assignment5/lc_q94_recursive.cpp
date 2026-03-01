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
    vector<int> inorderTraversal(TreeNode* root) {
       vector<int> answer;
       if (root==nullptr){return answer;}
       vector <int> left=inorderTraversal(root->left);
       answer.insert(answer.end(),left.begin(),left.end());
       answer.push_back(root->val);
       vector<int> right=inorderTraversal(root->right);
       answer.insert (answer.end(),right.begin(),right.end());
      return answer;
    }
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL)
        {
            return NULL;
        }
       stack<TreeNode*> s;
        s.push(root);
        while(! s.empty())
        {
            TreeNode* temp = s.top();
            s.pop();
            if(temp!= NULL)
            {
                s.push(temp->left);
                s.push(temp->right);
                std::swap(temp->left, temp->right);
            }
        }
        return root;
        
    }
}; 

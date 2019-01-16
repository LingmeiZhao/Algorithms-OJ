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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> tree1;
        vector<int> tree2;
        stack<TreeNode*> s1;
        s1.push(root1);
        stack<TreeNode*> s2;
        s2.push(root2);
        while(!s1.empty())
        {
            TreeNode*temp = s1.top();
            s1.pop();
            if(temp->left == NULL && temp->right == NULL)
            {
                tree1.push_back(temp->val);             
            }
            if(temp->right !=NULL)
            {
                s1.push(temp->right);
            }
            if(temp -> left !=NULL)
            {
                s1.push(temp->left);
            }
        }
        while(!s2.empty())
        {
            TreeNode* temp = s2.top();
            s2.pop();
            if(temp->left == NULL && temp->right == NULL)
            {
                tree2.push_back(temp->val);
            }
            if(temp->right !=NULL)
            {
                s2.push(temp->right);
            }
            if(temp -> left !=NULL)
            {
                s2.push(temp->left);
            }
        }
     
        if(tree1.size() != tree2.size())
        {
            return false;
        }
        for(int i=0; i<tree1.size();i++)
        {
            if(tree1.at(i) != tree2.at(i))
            {
                return false;
            }
        }
        return true;
    }
}; 

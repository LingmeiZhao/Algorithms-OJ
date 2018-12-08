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
   static bool comp(pair<int ,int> a, pair<int , int> b) {
    return a.second >  b.second;
    }
    
    vector<int> findMode(TreeNode* root) {
        vector<int> res; 
        if(root == NULL)
        {
            return res;
        }
         unordered_map<int, int> my_map;
         queue<TreeNode *>  q;
         q.push(root);
        while(! q.empty())
        {
            TreeNode* temp = q.front();
            if( my_map.find(temp->val) == my_map.end())  
            {
                my_map[temp-> val] = 1;
            }else 
            {
                auto it = my_map.find(temp->val);
                 it->second ++;   
            }
            if(temp -> left != NULL)
            {
                q.push(temp -> left);
            }else if(temp -> right != NULL)
            {
                q.push(temp -> right);
            }
            q.pop();
        }
 
        vector<std::pair<int, int>>  elems (my_map.begin(), my_map.end());
        std :: sort(elems.begin(), elems.end(), comp);
        
        res.push_back(elems.at(0).first);
        for(int i = 1 ; i < elems.size(); i++)
        {
            if(elems.at(i). second == elems.at(0).second)
            {
                res.push_back(elems.at(i).first);
            }
        }
	    return res;
    }
        
}; 

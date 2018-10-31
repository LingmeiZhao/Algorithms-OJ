/*Depth first Search*/
bool hasPathSum(TreeNode* root, int sum) {
        if(root == NULL)
        {
            return false;
        }
        if(root -> left == nullptr && root ->right == nullptr)
        {
            if(root ->val == sum)
            {
                return true;
            }else
            {
                return false;
            }
        }
        vector<int> element;
       queue<TreeNode*> q;
        q.push(root);
        queue<int> sumQ;
        sumQ.push(root ->val);
        if(root-> left ==nullptr || root -> right == nullptr)
        {
            if(root->left != nullptr)
            {
                if((root -> val + root -> left->val) == sum)
                {
                    return true;
                }
            }else if(root -> right != nullptr)
            {
                if((root->val + root ->right -> val) == sum)
                {
                    return true;
                }
            }
        }
        while(!q.empty())
        {
            queue<TreeNode *> tempQue;
            TreeNode* temp = q.front();
            while(!q.empty())
            {
                q.pop();
                if(temp->left != nullptr)
                {
                    int tempSum = sumQ.front() + temp ->left ->val;
                    sumQ.push(tempSum);
                    tempQue.push(temp->left);
                }else
                {
                    element.push_back(sumQ.front());
                }
                if(temp->right != nullptr)
                {
                    int tempSum = sumQ.front() + temp->right ->val;
                    sumQ.push(tempSum);
                    tempQue.push(temp->right);
                }else
                {
                    element.push_back(sumQ.front());
                }
                sumQ.pop();
            }
            q = tempQue;
        }
        
        for(int i =0 ;i < element.size(); i++)
        {
            if(element.at(i) == sum)
            {
                return true;
            }
        }
        return false;
        
}

/* recursive way */
bool hasPathSum(TreeNode* root, int sum) {
         if (root == NULL) return false;
         if (root->val == sum && root->left ==  NULL && root->right == NULL) return true;
        return hasPathSum(root->left, sum-root->val) || hasPathSum(root->right, sum-root->val);
}


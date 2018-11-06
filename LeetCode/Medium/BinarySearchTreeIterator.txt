/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    stack<TreeNode *> myStack;
    BSTIterator(TreeNode *root) {
        pushAllNode(root);    
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        if(myStack.empty())
        {
            return false;
        }
        return true;
    }

    /** @return the next smallest number */
    int next() {
        TreeNode * top = myStack.top();
        myStack.pop();
       if(top -> right != nullptr)
       {
           pushAllNode(top -> right);
       }
        return top-> val;
    }
    
    void pushAllNode(TreeNode * root)
    {
        TreeNode* current = root;
        while(current != nullptr)
        {
            myStack.push(current);
            current = current -> left;
        }
    }
    
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */ 

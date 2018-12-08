/*
// Definition for a Node.
class Node {
public:
    int val = NULL;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        if(root == NULL)
        {
            return res;
        }
        queue<Node*> q;
        q.push(root);
        while(! q.empty())
        {
            int size = q.size();
            vector<int> element;
            for(int i= 0 ; i < size ; i++)
            {
                Node* temp = q.front();
                q.pop();
                element.push_back(temp->val);
                for(auto node : temp-> children)
                {
                    q.push(node);
                }
            }
            res.push_back(element);
        }
        return res;
    }
}; 

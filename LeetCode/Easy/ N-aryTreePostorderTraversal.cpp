/*
// Definition for a Node.
class Node {
public:
    int val;
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
    vector<int> postorder(Node* root) {
        vector<int> res;
          if(root == NULL)
        {
            return res;
        }
        stack<Node *> s;
        s.push(root);
        while(!s.empty())
        {
            Node * temp = s.top();
            s.pop();
            res.push_back(temp->val);
           for(int i=0; i< temp->children.size(); i++)
           {
               s.push(temp->children.at(i));
           }
        }
        
       std::reverse(res.begin(), res.end());
        return res;
    }
};

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> res;
        int lengthOut= A.size();
        int lengthIn = A[0].size();
        for(int i=0; i<lengthIn ; i++)
        {
            vector<int> temp;
            for(int j=0; j<lengthOut ;j++)
            {
                temp.push_back(A.at(j).at(i));
            }
            res.push_back(temp);
        }
        return res;
    }
}; 

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> res;
        for(int i =0; i<A.size(); i++)
        {
            int square = A.at(i)* A.at(i);
            res.push_back(square);
        }
        sort(res.begin(), res.end());
        return res;
    }
}; 

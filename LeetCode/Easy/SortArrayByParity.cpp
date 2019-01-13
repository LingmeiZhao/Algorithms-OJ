class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> even;
        vector<int> odd;
        vector<int> res;
        for(int i = 0 ; i<A.size(); i++)
        {
            if(A.at(i) % 2 == 0)
            {
                even.push_back(A.at(i));
            }else 
            {
                odd.push_back(A.at(i));
            }
        }
        res.reserve( A.size() ); 
        res.insert( res.end(), even.begin(), even.end() );
        res.insert( res.end(), odd.begin(), odd.end() );
        return res;
    }
}; 

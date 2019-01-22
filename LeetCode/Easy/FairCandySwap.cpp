class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
       vector<int> res;
        int sumA =0;
        int sumB = 0;
        for(auto t : A)
        {
            sumA += t;
        }
        for(auto t: B)
        {
            sumB += t;
        }
        for(int i = 0; i<A.size(); i++)
        {
            for(int j=0; j<B.size();j++)
            {
                if( (sumA - A.at(i) + B.at(j)) == (sumB - B.at(j) + A.at(i)) )
                {
                    res.push_back(A.at(i));
                    res.push_back(B.at(j));
                    break;
                }
            }
            if(res.size() != 0)
            {
                break;
            }
        }
        return res;
    }
}; 

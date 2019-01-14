class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> res;
        int countInc = 0, countDec = S.size();
        for(int i =0; i<S.size(); i++)
        {
            if(S.at(i)=='I')
            {
                res.push_back(countInc);
                countInc++;
            }else if(S.at(i) == 'D')
            {
                res.push_back(countDec);
                countDec--;
            }
        }
        res.push_back(countInc);
        return res;    
    }
}; 

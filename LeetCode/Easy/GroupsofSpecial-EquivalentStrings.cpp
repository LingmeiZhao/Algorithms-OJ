class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
       set<pair<string, string>> count;
        for(auto w : A)
        {
            pair<string, string> p;
            for(int i = 0; i< w.size(); i++)
            {
                if( i % 2 ==0 )
                {
                    p.first += w.at(i);
                }else
                {
                    p.second += w.at(i);
                }
            }
            sort(p.first.begin(), p.first.end());
            sort(p.second.begin(), p.second.end());
            count.insert(p);
        }
        return count.size();
    }
}; 

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()== 0 && t.size() == 0)
        {
            return true;
        }
        if(s.size() != t.size())
        {
            return false;
        }
        unordered_map<char, int> map;
        for(int i=0; i< s.size(); i++)
        {
            map[s.at(i)]++;
            map[t.at(i)]--;
        }
        for(auto ele: map)
        {
            if(ele.second != 0)
            {
                return false;
            }
        }
        return true;
    }
}; 

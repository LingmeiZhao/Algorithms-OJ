class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
     unordered_map<int, int> my_map;
        for(int i = 0;  i< A.size(); i++)
        {
            if(my_map.find(A.at(i)) == my_map.end())
            {
                my_map[A.at(i)] = 1;
            }else
            {
                return A.at(i);
            }
        }
        return 0;  
    }
}; 

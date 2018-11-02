class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> myMap;
        for(int i= 0;i < nums.size() ;i++)
        {
            if(myMap.find(nums.at(i)) == myMap.end())
            {
                myMap.insert({nums.at(i), 1});
            }else
            {
                myMap.at(nums.at(i)) ++;
            }
        }

         for ( auto it = myMap.begin(); it != myMap.end(); ++it ) {
            if (it->second > (nums.size()/2)) 
            {
                return it->first;
            }
        } 
    }
}; 

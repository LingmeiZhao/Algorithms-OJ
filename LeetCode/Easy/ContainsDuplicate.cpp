class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> myMap;
        for(int i=0; i< nums.size() ;i++)
        {
            if(myMap.find(nums.at(i)) == myMap.end())
            {
                myMap[nums.at(i)] =1;
            }else {
                auto it = myMap.find(nums.at(i));
                it -> second ++;
            }
        }
        for(auto it : myMap)
        {
            if (it .second >=2)
            {
                return true;
            }
        }
        return false;
        
    }
}; 

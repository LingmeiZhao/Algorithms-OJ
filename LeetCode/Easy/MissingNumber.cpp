class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if( i!=nums.at(i))
            {
                return i;
            }
        }
        return nums.size();
    }
}; 

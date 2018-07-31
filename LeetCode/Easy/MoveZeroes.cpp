class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        vector<int> temp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums.at(i)==0)
            {
                count++;
            }
            else
            {
                temp.push_back(nums.at(i));
            }
        }
        if(count==nums.size())
        {
            return;
        }
        for(int i=0;i<temp.size();i++)
        {
            nums.at(i)=temp.at(i);
        }
       for(int i=nums.size()-1;i>=nums.size()-count;i--)
       {
           nums.at(i)=0;
       }
    }
}; 

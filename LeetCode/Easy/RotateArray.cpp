class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> temp;
        if(k==0 || n==0)
        {
            return;
        }
            for (int i = 0; i < n; i++)
            {
                temp.push_back(nums.at(i));
            }
            
            for (int i = 0; i < n; i++)
            {
                nums[(i + k)%n] = temp[i];
            }

    }
}; 

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int count=0;
        int repeat=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid.at(i).size();j++)
            {
                if(grid.at(i).at(j)==1)
                {
                    count++;
                     if(i!=0 && grid.at(i-1).at(j) == 1) 
                     {
                         repeat++;
                     }
                    if(j!=0 && grid.at(i).at(j-1) == 1)
                    {
                        repeat++;
                    }
                }
            }
        }
     int result=4*count-2*repeat;
        return result;
        
    }
};

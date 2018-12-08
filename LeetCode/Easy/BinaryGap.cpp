class Solution {
public:
    int binaryGap(int N) {
        int count=0;
        int remainder = 0;
        int divinded = N;
        vector<int> location;
        int res = INT_MIN;
        while(divinded != 0)
        {
            count++;
            if(divinded % 2 ==1)
            {
                location.push_back(count);
            }
            divinded = divinded/2;
        }
        if(location.size() ==1)
        {
            return 0;
        }
       int  difference = location.at(0);
     
        for(int i =  1; i< location.size(); i++)
        {
            if(i<2)
            {
                difference = location.at(i) - difference;
            }else{
                res = max(res, difference);
               difference = location.at(i)  - location.at(i-1);
            }
        }
        if(res < difference)
        {
            res = difference;
        }
        return res;
        
    }
}; 

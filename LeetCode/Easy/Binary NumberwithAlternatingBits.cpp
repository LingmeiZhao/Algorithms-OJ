class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int> digits;
        int divinded = n;
        while(divinded != 0)
        {
            int digit = divinded % 2;
            digits.push_back(digit);
            divinded = divinded/ 2;
        }
        vector<int> check;
        for(int i = 1; i< digits.size(); i++)
        {
            int difference = digits.at(i)-digits.at(i-1);
            check.push_back(difference);
        }
        for(int i = 0; i < check.size(); i++)
        {
            if(check.at(i)==0)
            {
                return false;
            }
        }
        return true;
    }
}; 

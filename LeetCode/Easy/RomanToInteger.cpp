class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> RomanNums = { { 'I' , 1 },
                                   { 'V' , 5 },
                                   { 'X' , 10 },
                                   { 'L' , 50 },
                                   { 'C' , 100 },
                                   { 'D' , 500 },
                                   { 'M' , 1000 } };
                                   
     int sum =RomanNums[s.back()] ;
    for (int i = s.length() - 2; i >= 0; --i) 
   {
       if (RomanNums[s[i]] < RomanNums[s[i + 1]])
       {
           sum =sum - RomanNums[s[i]];
       }
       else
       {
           sum =sum+ RomanNums[s[i]];
       }
    }  
    return sum;
    }
}; 

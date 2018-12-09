class Solution {
public:
    int addDigits(int num) {
        int temp = num;
        while(temp > 9)
        {
            string str = to_string(temp);
            int sum = 0;
            for(int i=0; i< str.size();i++)
            {
                sum = sum + (str.at(i)-'0');
            }
            temp = sum;
        }
        return temp;
    }
}; 

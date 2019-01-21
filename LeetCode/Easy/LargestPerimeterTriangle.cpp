class Solution {
public:
    bool addRegular(int a, int b, int c)
    {
        if(a+b >c && a+c>b && b+c>a)
        {
            return true;
        }else
        {
            return false;
        }
    }
    bool minusRegular(int a, int b, int c)
    {
        if( (abs(a-b))<c && (abs(a-c)) <b && (abs(b-c))<a)
        {
            return true;
        }else
        {
            return false;
        }
    }
    int largestPerimeter(vector<int>& A) {
        sort(A.begin(), A.end());
        for(int i = A.size()-1; i>1 ; i--)
        {
            if((addRegular(A.at(i),A.at(i-1), A.at(i-2)) == true) && (minusRegular(A.at(i),A.at(i-1), A.at(i-2)) == true ))
            {
                return A.at(i) + A.at(i-1) + A.at(i-2);
            }
        }
        return 0;
        
    }
}; 

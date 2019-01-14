class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> res;
        vector<int> odd;
        vector<int> even;
        for(int i=0;i<A.size();i++)
        {
            if(A.at(i)%2 == 0)
            {
                even.push_back(A.at(i));
            }else{
                odd.push_back(A.at(i));
            }
        }
         int g=0;
          int k=0;
        for(int i =0; i<A.size();i++)
        {
            if(i%2 ==0)
            {
                res.push_back(even[g]);
                g++;
            }else
            {
                res.push_back(odd[k]);
                k++;
            }
        }
        return res;
    }
}; 

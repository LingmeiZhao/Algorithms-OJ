class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row1 = "QqWwEeRrTtYyUuIiOoPp";
        string row2 = "AaSsDdFfGgHhJjKkLl";
        string row3 = "ZzXxCcVvBbNnMm";
        int N = words.size();
        vector<string> res;
        for(int i=0;i<words.size();i++)
        {
            int N = words.at(i).size();
            int count1 =0;
            int count2 = 0;
              int count3 = 0;
            for(int j=0;j<N;j++)
            {
        
                if(row1.find(words.at(i).at(j)) !=std::string::npos )
                {
                    count1++;
                }
                if(row2.find(words.at(i).at(j)) !=std::string::npos )
                {
                    count2++;
                }
                if(row3.find(words.at(i).at(j)) !=std::string::npos )
                {
                    count3++;
                }
            }
            if(count1 == N || count2 == N || count3 == N  )
            {
                res.push_back(words.at(i));
            }
        }
        return res;
    }
};

//method 1
class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        vector<string> res;
        string combine = A+B;
        unordered_map<string, int> map;
        for(int i=0; i<combine.size();){
            string temp= "";
            int index = 0;
            for(int j=i; j<combine.size();j++)
            {
                if(combine.at(j)==' ')
                {
                    index = j;
                    break;
                }
            }
            temp = combine.substr(i, index-1);
            if(map.find(temp) == map.end())
            {
                map[temp] = 1;
            }else{
                map[temp]++;
            }
            i = index+1;
        }

      for ( auto it = map.begin(); it != map.end(); ++it )
      {
          if(it->second == 1)
          {
              res.push_back(it->first);
          }
      }
    return res;
    }
};

//method 2
class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
         unordered_map<string, int> count;
        istringstream iss(A + " " + B);
        while (iss >> A) count[A]++;
        vector<string> res;
        for (auto w: count)
            if (w.second == 1)
                res.push_back(w.first);
        return res;
    }
};

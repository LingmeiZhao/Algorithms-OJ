class Solution {
public:
    string toGoatLatin(string S) {
        istringstream iss(S);
        string res, w;
        int i = 0, j;
        while(iss >> w  )
        {
            if(w.at(0) == 'a' || w.at(0) == 'e' || w.at(0) == 'i' || w.at(0) == 'o' || w.at(0) == 'u' ||w.at(0) == 'A' || w.at(0) == 'E' || w.at(0) == 'I' || w.at(0) == 'O' || w.at(0) == 'U' )
            {
                if(res.size() == 0)
                {
                     res =  w + "ma";
                }else {
                      res = res + " " +  w + "ma";
                }
            }else { 
                if(res.size() == 0)
                {
                    res = w.substr(1) + w.substr(0,1) + "ma";
                }else {
                      res = res + " " + w.substr(1) + w.substr(0,1) + "ma";
                }
            }
          for (j = 0, ++i; j < i; ++j) res += "a";
        }
     return res;
    }
}; 

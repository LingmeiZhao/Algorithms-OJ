class Solution {
public:
    string toLowerCase(string str) {
        vector<char> temp;
        for(int i = 0; i < str.size(); i++)
        {
              if(str.at(i) <= 'Z' && str.at(i) >= 'A')
              {
                  char c = str.at(i) - ('Z' - 'z');
                  temp.push_back(c);
              }else 
              {
                  temp.push_back(str.at(i));
              }
        }
    return  std::string(temp.begin(), temp.end());
     
    }
}; 

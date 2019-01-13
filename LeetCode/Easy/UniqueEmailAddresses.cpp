class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_map<string, int> my_map;
        for(int i = 0; i < emails.size(); i++)
        {
            string temp = emails.at(i);
            int index = temp.find('@');
            string name = temp.substr( 0, index );
            string domain = temp.substr( index );
            name.erase( remove_if( name.begin(), name.end(), []( const auto& c ){ return c == '.'; }), name.end() );
            name.erase(name.find('+'));
            string email = name + domain;
            if(my_map.find(email) == my_map.end())
            {
                my_map[email] = 1;
            }else 
            {
                my_map[email]++;
            }
        }
        return my_map.size();
    }
}; 

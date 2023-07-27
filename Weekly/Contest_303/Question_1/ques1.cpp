// 2351. First Letter to Appear Twice


class Solution {
public:
    char repeatedCharacter(string s) {
        vector<pair<char,int>> repeat;
        
        int n = s.size();
        int letter;
        
        for(int i=0; i<n; i++)
        {
            letter = s[i];
            for(int j=0; j<repeat.size(); j++)
            {
                if(letter == repeat[j].first)
                {
                    // repeat[j].second = cnt++;
                    return letter;
                }
            }
            
            repeat.push_back(make_pair(letter, 1));
        }
        return letter;
        
        
    }
};
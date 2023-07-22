// 6926. Sort Vowels in a String

class Solution {
public:
    string sortVowels(string s) {
        long long int n = s.size();
        
        for(long long int i=0; i<n; i++)
        {
            if(s[i] == 'a' || s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' ||s[i] == 'A' ||s[i] == 'E' ||s[i] == 'I' ||s[i] == 'O' ||s[i] == 'U' )
            {
                int numi = s[i];
                int index = i;
                
                int mini = numi;
                int miniIndex = i;
                for(long long int j=i+1; j<n; j++)
                {
                    if(s[j] == 'a' || s[j] == 'e' ||s[j] == 'i' ||s[j] == 'o' ||s[j] == 'u' ||s[j] == 'A' ||s[j] == 'E' ||s[j] == 'I' ||s[j] == 'O' ||s[j] == 'U' )
                    {
                        int numj = s[j];
                        if(numj < mini)
                        {
                            mini = s[j];
                            miniIndex = j;
                        }
                        
                    }
                }
                swap(s[i], s[miniIndex]);
            }
            
        }
        
        
        
        return s;
    }
};
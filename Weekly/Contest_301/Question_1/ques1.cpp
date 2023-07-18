// 2335. Minimum Amount of Time to Fill Cups

class Solution {
public:
    int fillCups(vector<int>& amount) {
        
        int i = 0;
        
        while(amount[2] > 0 || amount[1] > 0 || amount[0] > 0)
        {
            sort(amount.begin(), amount.end());
            
            if( amount[2] > 0 && amount[1] > 0 )
            {
                amount[2]--;
                amount[1]--;    
            }
            else{
                amount[2]--;
            }
            
            i++;
        }
        return i;
    }
};
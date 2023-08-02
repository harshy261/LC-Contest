class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int n = grades.size();
        
        sort(grades.begin(), grades.end());

        int tC = n;
        int c = 1;
        int turn = 1;
        int group = 0;
        
        while(c <= n)
        {
            // int mini = *min_element(grades.begin(), grades.end());
            // int index = -1;
            // for(int i = 0; i<c; i++)
            // {
            //     if(mini == nums[i])
            //     {
            //         index = i;
            //     }
            // }
            
            for(int j = 0; j<c; j++)
            {
                grades[j] = INT_MAX;
            }
            group++;
            turn++;
            // tc = tc - c;
            c = c + turn;
            
            
        }
        return group;
        
        
        
    }
};
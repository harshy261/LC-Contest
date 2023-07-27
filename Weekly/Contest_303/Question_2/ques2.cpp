// 2352. Equal Row and Column Pairs

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        
        vector<long long> nums1;
        vector<long long> nums2;
        
        for(int i=0; i<n; i++)
        {
            long long num = 0;
            int p = n-1;
            for(int j=0; j<n; j++)
            {
                num = num * 10 + grid[i][j];
                p--;
            }
            nums1.push_back(num);
            
        }
        for(int i=0; i<n; i++)
        {
            long long num = 0;
            int p = n-1;
            for(int j=0; j<n; j++)
            {
                num = num * 10 + grid[j][i];
                p--;
            }
            nums2.push_back(num);
            
        }
        
        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(nums1[i] == nums2[j])
                {
                    cnt++;
                }
            }
        }
        
        return cnt;
        
        
        
        
    }
};
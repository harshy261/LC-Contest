class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        int cnt = 0;
        while( nums[n-1] != 0)
        {
            int mini = INT_MAX;
            for(int i=0; i<n; i++)
            {
                if(nums[i] < mini && nums[i] != 0 )
                {
                    mini = nums[i];
                }
            }
            
            for(int i=0; i<n; i++)
            {
                if(nums[i] != 0)
                {
                    nums[i] = nums[i] - mini;
                }
            }
            cnt++;

            
        }
        
        return cnt;
        
    }
};
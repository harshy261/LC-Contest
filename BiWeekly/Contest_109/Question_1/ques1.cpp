// 6930. Check if Array is Good

class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        int maxi = nums[n-1];
        
        if(maxi+1 == n)
        {
            int cnt = 1;
            for(int i=0; i<n; i++)
            {
                if(nums[i] == cnt )
                {
                    if(i != n-2)
                    {
                        cnt++;
                    }
                }
                else{
                    return false;
                }
            }
            return true;
        }
        else
        {
            return false;
        }
        
        
    }
};
// 2341. Maximum Number of Pairs in Array


class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int n = nums.size();
        
        sort( nums.begin(), nums.end() );
        
        int cnt = 0;
        for(int i=1; i<n; )
        {
            if(nums[i] == nums[i-1])
            {
                cnt++;
                i = i+2;
            }
            else{
                i = i+1;
            }
        }
        
        int rem = n - (2*cnt);
        
        vector<int> ans;
        ans.push_back(cnt);
        ans.push_back(rem);
        
        return ans;
        
        
        
    }
};
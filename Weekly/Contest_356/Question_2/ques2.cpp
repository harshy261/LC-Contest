class Solution {
public:
    
    int dist(vector<int> &num)
    {
        int n = num.size();
        sort(num.begin(), num.end());

        int res = 0;
        for (int i = 0; i < n; i++) {
            while (i < n - 1 && num[i] == num[i + 1])
            {
                i++;   
            }
        res++;
        }
        return res;
    }
    
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size();
        vector<int> num = nums;
        
        int res = dist(num);
        // cout<< "RES->> "<<res<<"   ";
        
        vector<int> temp;
        int ans = 0;
        
        for (int i=0; i <n; i++)
        {
            for (int j=i; j<n; j++)
            {
                for (int k=i; k<=j; k++)
                {
                    temp.push_back(nums[k]);
                    // cout<<nums[k]<<" ";
                }
                int cnt = dist(temp);
                // cout<<"COUNT->> "<<cnt<<endl;
            
                if(cnt == res)
                {
                    ans++;
                }
                cout<<endl;
                temp.clear();
            }
            
            
        }
        return ans;
        
        
        
        
    }
};
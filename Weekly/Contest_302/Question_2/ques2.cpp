// 2342. Max Sum of a Pair With Equal Sum of Digits

class Solution {
public:
    
    int getSum(int n)
    {
        int sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }
    
    int maximumSum(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> temp(n);
        
        for(int i=0; i<n; i++)
        {
            int num = nums[i];
            int digitSum = getSum(num);
            temp.push_back(digitSum);
        }
        
        map<int , int> digits;
        for(int i=0; i<n; i++)
        {
            digits.insert(pair<int, int>(temp[i], nums[i]));
        }
        
        sort(temp.begin(), temp.end());
        
        int greatest1 = temp[n-1];
        int greatest2 = temp[n-2];
        
        int sum = -1;
        
        auto search = digits.find(greatest1);
        
        if (search != digits.end()) {  
          sum = sum + search->second;
        }
        
        search = digits.find(greatest2);
        
        if (search != digits.end()) {  
          sum = sum + search->second;
        }
          
        return sum;
        
        
    }
};
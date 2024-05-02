class Solution {
public:
    int findMaxK(vector<int>& nums) {
      
        unordered_set<int> neg;
        
       
        for (int num : nums) {
            if (num < 0)
                neg.insert(num);
        }
        
        int ans = -1;
        
        for (int num : nums) {
            
            if (num > ans && neg.contains(-num))
                ans = num;
        }
        
        return ans;
    }
};
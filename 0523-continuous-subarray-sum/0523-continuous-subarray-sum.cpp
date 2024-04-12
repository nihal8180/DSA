class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_set<int>s;
        long long curr=0,last=0;
        for(int i=0;i<n;i++){
            curr+=nums[i];
            int a=curr%k;
            if(s.count(a)){
                return true;
            }
            s.insert(last%k);
            last=curr;
        }
        return false;
    }
};
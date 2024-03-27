class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int mini=INT_MAX;
        int sum=0;
        int flag=1;
        for(int j=0;j<nums.size();j++){
            sum+=nums[j];
            while(sum>=target){
                flag=0;
                mini=min(mini,j-i+1);
                sum-=nums[i++];
            }
        }
        if(flag)return 0;
        else
        return mini;
        
    }
};
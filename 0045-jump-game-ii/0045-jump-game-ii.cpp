class Solution {
public:
    int jump(vector<int>& nums) {
        int cov=0;
        int jumps=0;
        int lastInd=0;
        int n=nums.size()-1;
        if(nums.size()==1) return 0;
        for(int i=0;i<nums.size();i++){
            cov=max(cov,nums[i]+i);
           if(i==lastInd){
               lastInd=cov;
               jumps++;
           
            if(cov>=n){
                return jumps;
            }
        }
        }
        return jumps;
    }
};
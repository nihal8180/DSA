class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1){
            return 0;
        }
        int c=0,pro=1;
        int l=0;
        for(int r=0;r<nums.size();r++){
            pro*=nums[r];
            while(pro>=k){
                pro/=nums[l];
                l++;
                
            }
            c+=r-l+1;
        }
        return c;
       
    }
};
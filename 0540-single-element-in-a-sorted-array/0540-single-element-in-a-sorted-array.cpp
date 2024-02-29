class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int mid;
        if(n==1) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        while(low<=high)
        {
            mid=(low+high)/2;
             if (nums[mid] != nums[mid + 1] && nums[mid] != nums[mid - 1]) {
            return nums[mid];
        }
            if(mid%2==0)
            {
                if(nums[mid]!=nums[mid+1])
                {
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
                continue;
            }
            else{
                if(nums[mid]!=nums[mid-1])
                {
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
        }
        return nums[mid];
    }
};
    
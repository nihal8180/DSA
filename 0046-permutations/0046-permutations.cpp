class Solution {
public:
    
    void per(vector<int>&nums, vector<vector<int>>&ans,int arr[],vector<int>&v){
        int n=nums.size();
        if(v.size()==n){
            ans.push_back(v);
            return;
        }
        for(int i=0;i<n;i++){
            if(!arr[i]){
                v.push_back(nums[i]);
                arr[i]=1;
                per(nums,ans,arr,v);
                arr[i]=0;
                v.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        int arr[nums.size()];
        for(int i=0;i<nums.size();i++){
            arr[i]=0;
        }
        per(nums,ans,arr,v);
        return ans;
        
    }
};
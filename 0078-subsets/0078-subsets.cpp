class Solution {
public:
    vector<vector<int>>v;
    void solve(int i, vector<int>& nums, vector<int>&subset){
        if(i == nums.size()){
            v.push_back(subset);
            return;
        } 
        // nottake
        solve(i+1, nums, subset);
        // take
        subset.push_back(nums[i]);
        solve(i+1, nums, subset);
        subset.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>subset;
        solve(0, nums, subset);
        return v;
    }
};
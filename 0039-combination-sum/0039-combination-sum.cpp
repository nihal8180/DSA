class Solution {
public:
    void combinationSum1(int ind,vector<int>&candidates,int target, vector<vector<int>>&v,  vector<int>&ans){
        if(ind==candidates.size()){
            if(target==0){
                v.push_back(ans);
                
            }
            return;
}
        if(candidates[ind]<=target){
            ans.push_back(candidates[ind]);
            combinationSum1(ind,candidates,target-candidates[ind],v,ans);
            ans.pop_back();
        }
        combinationSum1(ind+1,candidates,target,v,ans);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>v;
        vector<int>ans;
        combinationSum1(0,candidates,target,v,ans);
        return v;
    }
};
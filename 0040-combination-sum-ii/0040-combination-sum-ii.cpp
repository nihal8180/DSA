class Solution {
public:
    
    void combination(int ind,vector<int>& candidates, int target,vector<vector<int>>&v,vector<int>&ans){
    
            if(target==0){
                v.push_back(ans);
            return ;
        }
        for(int i=ind;i<candidates.size();i++){
            if(i>ind && candidates[i]==candidates[i-1]){continue;}
            if(candidates[i]>target){break;}
            ans.push_back(candidates[i]);
        combination(i+1,candidates,target-candidates[i],v,ans);
            ans.pop_back();
        
    }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
       sort(candidates.begin(),candidates.end());
        vector<vector<int>>v;
        vector<int>ans;
        combination(0,candidates,target,v,ans);
        return v;
        
    }
};

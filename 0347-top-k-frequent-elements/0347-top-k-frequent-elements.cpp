class Solution {
public:
    static bool comp(pair<int,int>&a,pair<int,int>&b){
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mpp;
        for(int i = 0;i < nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<pair<int,int>>arr;
        for(auto it : mpp){
            arr.push_back({it.first,it.second});
        }
        vector<int>ans;
        sort(arr.begin(),arr.end(),comp);
        for(int i = 0;i < k;i++){
            ans.push_back(arr[i].first);
        }
        return ans;
    }
};
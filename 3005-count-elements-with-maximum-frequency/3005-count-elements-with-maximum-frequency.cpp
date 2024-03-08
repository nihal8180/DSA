class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
      
        vector<int>v;
        for(auto it:mp){
            v.push_back(it.second);
        }
        sort(v.begin(),v.end());
        int f=v[v.size()-1];
        int max=v[v.size()-1];
        for(int i=v.size()-2;i>=0;i--){
            if(v[i]==f){
                max+=v[i];
            }
            else{
                break;
            }
        }
        
        return max;
    }
};
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       int c=0;
        int csum=0;
        unordered_map<int,int>mp;
        for(int num:nums){
            csum+=num;
            if(csum==goal){
                c++;
            }
            if(mp.find(csum-goal)!=mp.end()){
                c+=mp[csum-goal];
            }
            mp[csum]++;
        }
        return c;
        
    }
};
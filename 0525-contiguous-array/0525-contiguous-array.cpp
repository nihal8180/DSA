class Solution {
public:
    int findMaxLength(vector<int>& nums) {
      map<int,int>mp;
        mp.insert({0,-1});
        int count=0,maxi=0;
       for(int i=0;i<nums.size();i++){
           if(nums[i]==1){
               count++;
           }
           else{
               count--;
           }
           if(mp.find(count)!=mp.end()){
               maxi=max(maxi,i-mp[count]);
           }
           else{
               mp.insert({count,i});
           }
       }
        return maxi;
 }
};
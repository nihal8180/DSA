class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
       map<int,int>mp;
        int sum=0;
        vector<int>v;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto it:mp){
            v.push_back(it.second);
        }
        int j=-1;
        sort(v.begin(),v.end());
        int i=0;
       while(i<v.size()){
           k-=v[i];
           if(k<0)return v.size()-i;
           i++;
       }
        return 0;
    }
};
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        map<int,int>mp1,mp2;
        for(auto it:target){
            mp1[it]++;
        }
        for(auto it:arr){
            mp2[it]++;
        }
        return mp1==mp2;
    }
};
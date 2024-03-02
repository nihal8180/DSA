class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       /* vector<int>v;
        for(int i=0;i<nums.size();i++){
            v.push_back(nums[i]*nums[i]);
        }
        sort(v.begin(),v.end());
        return v;
        */
        int i=0,s=nums.size()-1,e=nums.size()-1;
        vector<int>v(nums.size());
        while(i<=s){
            if(abs(nums[i])>abs(nums[s])){
                v[e--]=nums[i]*nums[i];
                i++;
            }
            else{
                v[e--]=nums[s]*nums[s];
                    s--;
            }
        }
        return v;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        vector<int>v1;
        int x,y;
        for(int i=0;i<nums.size();++i){
            v1.push_back(nums[i]);
        }
        sort(v1.begin(),v1.end());
         int i=0,j=v1.size()-1;
        while(i<j){
            if((v1[i]+v1[j])>target){
                j--;
            }
            else if((v1[i]+v1[j])<target){
                i++;
            }
            else{
                x=v1[i];
                y=v1[j];
                break;
            }   
        }
        for(i=0;i<nums.size();++i){
            if(nums[i]==x){
                v.push_back(i);
            }
            else if(nums[i]==y){
                v.push_back(i);
            }
            if(v.size()==2)break;
        }
        return v;
    }
};
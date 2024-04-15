class Solution {
public:
    
    string ans="0";
    int cnt=1;
    void solve(int n){
        if(cnt==n){
            return ;
        }
        string ans1=ans;
        for(int i=0;i<ans1.size();i++){
            if(ans1[i]=='0'){
                ans1[i]='1';
            }
            else{
                ans1[i]='0';
            }
        }
            reverse(ans1.begin(),ans1.end());
            cnt++;
            ans+="1"+ans1;
        
        solve(n);
    }
    char findKthBit(int n, int k) {
        if(n==1){
            return '0';
        }
        solve(n);
        char j=ans[k-1];
        return j;
    }
};
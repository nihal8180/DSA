class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>ans;
        
        for(int i=0;i<queries.size();i++){
            int c=0;
            for(int j=0;j<points.size();j++){
                int ans=points[j][0];
                int ans1=points[j][1];
                long long k=(ans-queries[i][0])*(ans-queries[i][0]);
                long long k1=(ans1-queries[i][1])*(ans1-queries[i][1]);
                float fin=sqrt(k+k1);
                if(fin<=queries[i][2]){
                    c++;
                }
            }
            ans.push_back(c);
        }
        return ans;
    }
};
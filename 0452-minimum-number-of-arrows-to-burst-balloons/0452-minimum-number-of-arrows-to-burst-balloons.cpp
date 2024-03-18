class Solution {
public:
    static bool comp(const vector<int>& vec1, const vector<int>& vec2){
    return vec1[1] < vec2[1];
    }

    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),comp);
        int maxi=points[0][1];
        int count=1;
        for(int i=1;i<points.size();i++){
            if(points[i][0]>maxi){
                count++;
                maxi=points[i][1];
            }
        }
        
        return count;

    }
};
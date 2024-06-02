
class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        int m = matrix.size();
        int n = matrix[0].size();
        int max_sum = INT_MIN;

        for (int left = 0; left < n; ++left) {
            vector<int> temp(m, 0);
            for (int right = left; right < n; ++right) {
                for (int i = 0; i < m; ++i) {
                    temp[i] += matrix[i][right];
                }

                set<int> cum_sum_set;
                cum_sum_set.insert(0);
                int cum_sum = 0;

                for (int t : temp) {
                    cum_sum += t;
                    auto it = cum_sum_set.lower_bound(cum_sum - k);
                    if (it != cum_sum_set.end()) {
                        max_sum = max(max_sum, cum_sum - *it);
                    }
                    cum_sum_set.insert(cum_sum);
                }
            }
        }

        return max_sum;
    }
};

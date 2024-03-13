class Solution {
public:
    int pivotInteger(int n) {
    long long sum=n*(n+1)/2;
        long pi=sqrt(sum);
        if(pi*pi==sum){
            return pi;
        }
        return -1;
    }
};
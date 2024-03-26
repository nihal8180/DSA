class Solution {
public:
    double myPow(double x, int n) {
        if(n==0){
            return 1;
            
       }
        if(n<0){
            n=abs(n);
            x=1/x;
        }
        if(n%2==0){
        double z=myPow(x,n/2);
        double z1=z*z;
            return z1;
        }
        else{
            double z=myPow(x,n/2);
            double z1=x*z*z;
            return z1;
        }
    }
};
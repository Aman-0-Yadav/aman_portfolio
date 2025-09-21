class Solution {
public:
    double myPow(double x, int n) {
        long Binform=n;
        double ans=1;
        if(Binform<0){
            x=1/x;
            Binform=-Binform;
        }
        while(Binform>0){
            if(Binform%2==1){
                ans*=x;
            }
            x*=x;
            Binform=Binform/2;
        }
        return ans;
    }
};
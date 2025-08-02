class Solution {
public:
    bool isPowerOfFour(int n) {
        int count_zero=0;
        int count_one=0;
        int count=0;
        if(n<=2&&n!=1) return false;
        if(n==1) return true;
        while(n!=0){
            if((n&1)==0){
                count_zero++;
            }
            if((n&1)==1){
                count_one++;
            }
            if(count_one>1) return false;
            n=n>>1;
            count+=1;
        }
        if(count_zero%2==0&&count_one==1) return true;
        return false;
    }
};

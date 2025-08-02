class Solution {
public:
    int findComplement(int num) {
        int n=num;
        int count=0;
        while(n!=0){
            count+=1;
            n=n>>1;
        }
        int m=1;
        while(count--){
            num=num^m;
            m<<=1;
        }
        return num;   
    }
};

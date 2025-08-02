class Solution {
public:
    int hammingDistance(int x, int y) {
        int hamcount = 0 ;
        if(x<y){
            x = x ^ y;
            y = x ^ y;
            x = x ^ y;
        }
        while(x !=0){
            int xi = x&1;
            int yi = y&1;
            hamcount += (xi ^ yi);
            x = x>>1;
            y = y>>1;
        }
        return hamcount;
    }
};

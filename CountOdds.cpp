class Solution {
public:
    int countOdds(int low, int high) {
        int count=0;
        if(low&1) count=1;
        if(high&1) count=1;
        return (high-low)/2+(count);
        return 0;
    }
};

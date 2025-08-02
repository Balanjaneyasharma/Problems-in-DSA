class Solution {
public:

    bool isPowerOfTwo(int n) {
        if(n>INT_MAX||n<=INT_MIN) return false;
        if(n && ! (n&(n-1))) return true;
        return false;
    }
};

class Solution
{
    public:
    int pos(int a , int b,int flag) {
        int carry = 0 , res = 0 , i = 0 ;
        while (a != 0 or b!= 0) {
            int bit1 = (a & 1) ? 1 : 0 ;
            int bit2 = (b & 1) ? 1 : 0 ;
            int num = bit1 ^ bit2 ^ carry ;
            if (bit1 == bit2) carry = bit1 & bit2 ;
            if (num == 1) res += (1<<i) ;
            i += 1 ;
            a >>= 1 ;
            b >>= 1 ;
        } if (flag == 0 and carry) res += (1<<i) ;
       
        return res;
    }
    int sum(int a , int b)
    {
         return pos(a,b,0);
        
    }
};

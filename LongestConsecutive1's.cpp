class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        int n =N;
        int count=0,maxi=-1;
        while(n!=0){
            if(n&1){
                count++;
            }
            else count=0;
            maxi=max(maxi,count);
            n=n>>1;
        }
        return maxi;
    }
};

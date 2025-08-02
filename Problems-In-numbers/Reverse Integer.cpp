class Solution {
public:
    int reverse(int x) 
    {
        int temp=0;
        
        while(x)
        {
            if(temp>INT_MAX/10 or temp<INT_MIN/10)
                return 0;
            else
            {
                int val=x%10;
                temp=temp*10+val;
                x=x/10;
            }
        }
        return temp;
    }
};

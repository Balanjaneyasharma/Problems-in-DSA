#include<bits/stdc++.h>
using namespace std;
int dp[10001]={-1};
int fibon(int n)
{
    dp[0]=0;
    dp[1]=1;

    if(dp[n]!=-1)
    {
        return dp[n];
    }
    return dp[n]=fibon(n-2)+fibon(n-1);
    
    
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        dp[i]=-1;
    }
    cout<<fibon(n-1)<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<dp[i]<<" ";
    }
}

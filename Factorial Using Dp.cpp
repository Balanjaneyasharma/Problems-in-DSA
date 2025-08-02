#include<iostream>
using namespace std;
int dp[10000];
int fib(int n)
{
  if(n<=1)
  {
    dp[n]=n;
    return n;
  }
  if(dp[n]!=-1)
   {
      return dp[n];
   }
   return dp[n]=fib(n-1)+fib(n-2);
}
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      dp[i]=-1;
  }
   cout<<fib(n-1)<<'\n';
  for(int i=0;i<n;i++)
  {
     cout<<dp[i]<<' ';
  } 
}

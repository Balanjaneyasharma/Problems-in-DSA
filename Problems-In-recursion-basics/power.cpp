#include<bits/stdc++.h>
using namespace std;
int pow(x,n)
{
  if(n==0){
    return 1;
  }
  return x*pow(x,n-1);
}
int main()
{
  int x,n;
  cin>>x>>n;
  cout<<pow(x,n)<<endl;
}

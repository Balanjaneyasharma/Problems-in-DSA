#include<bits/stdc++.h>
using namespace std;
int mul(int m,int n)
{
  if(n==0){
    return 0;
  }
  return mul(m,n-1)+m;
}
int main()
{
  int m,int n;
  cin>>m>>n;
  cout<<mul(m,n)<<endl;
}

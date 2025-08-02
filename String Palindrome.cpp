#include<iostream>
using namespace std;
bool isPalin(int l,int r, string S)
{
  if(l>r)
  {
    return true;
  }
  if(S[l]!=S[r])
  {
     return false;
  }
  return isPalin(l+1,r-1,S);
}
int main()
{
string S;
cin>>S;
cout<<isPalin(0,S.length()-1,S);
return 0;
}

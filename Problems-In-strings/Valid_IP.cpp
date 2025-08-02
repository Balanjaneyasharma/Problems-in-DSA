#include<bits/stdc++.h>
using namespace std;
int isValid(string s)
{
  if(s[0]=='.') return 0;
  int sum=0,count=0;
  int digitcount=0;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]!='.')
    {
      if(!(isdigit(s[i]))) return 0;
      digitcount++;
      sum=sum*10+s[i]-'0';
      if(s[i]=='0'&&s[i+1]!='.' &&i<s.size()-1)
      {
        return 0;
      }
    }
    if(s[i]=='.')
    {
      count++;
      if(sum>255) return 0;
      sum=0;
      digitcount=0;    
    }
    if(s[i]=='.'&&s[i+1]=='.')
    {
      return 0;
    }
  }
  if(count==3) return 1;
  return 0;
}
int main()
{
  string s;
  cin>>s;
  cout<<isValid(s);
}

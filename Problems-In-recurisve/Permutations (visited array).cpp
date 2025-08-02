#include <bits/stdc++.h>
#include<string.h>
using namespace std;
void permutasing(string s, string ss, int n, int vi[])
{
    if (s.size()==ss.size())
    {
        cout<<ss<<'\n';
    }
    for(int i=0;i<n;i++)
    {
        if (vi[i]==0)
        {
            vi[i]=1;
            permutasing(s,ss+s[i],n,vi);
            vi[i]=0;
        }
    }
}
int main()
{
    string s,ss;
    cin>>s;
    int n =s.size();
    int vi[n]={0};
    permutasing(s,ss,s.size(),vi);
    return 0;
}

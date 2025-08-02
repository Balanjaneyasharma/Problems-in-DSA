#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int l[n];
    for(int i=0;i<n;i++)
    {
       cin>>l[i];
    }
    int k[n];
    for(int i=0;i<n;i++)
    {
       k[i]=0;
    }
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<=i;j++)
       {
         k[i]+=l[j];
       }
    }
    for(int i=0;i<n;i++)
    {
       cout<<k[i]<<" ";
    }
    return 0;
}

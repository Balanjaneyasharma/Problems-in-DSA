#include <iostream>
using namespace std;
void SumSubArray(int a[],int n,int x)
{
     int flg=0;
     for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum =0;
            for(int k=i;k<=j;k++)
            {
               // cout<<a[k]<<" ";
               sum=sum+a[k];
            }
            //cout<<sum<<"\n";
            if(sum==x)
            {
                cout<<"true";
                flg=1;
                break;
            } 
        }
    }
    if(!flg)
    {
        cout<<"false";
    }
}
int main()
{
   int n,m;
   cin>>n>>m;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   SumSubArray(a,n,m);
   return 0;
}

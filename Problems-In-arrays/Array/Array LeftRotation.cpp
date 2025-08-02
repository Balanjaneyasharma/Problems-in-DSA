#include<iostream>
#include<array>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter Size :";
    cin>>n;
    int a[n];
    cout<<"Enter Elements"<<"\n";
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }
    cout<<"Enter No Of Roatations : "<<"\n";
    cin>>m;
    for(int i=0;i<m;i++)
    { 
       for(int i=0;i<n-1;i++)
      {  
         swap(a[i],a[i+1]);
      }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<' ';
    }
    return 0;
}

#include<iostream>
#include<array>
using namespace std;
void bublesort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int swaps=0;
        for(int j=0;j<n-1;j++)
        {
            if (a[j]>a[j+1])
            {
                swaps=1;
                swap(a[j],a[j+1]);
            }
        }
        if(!swaps)
        {
            break;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bublesort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
     return 0;
}

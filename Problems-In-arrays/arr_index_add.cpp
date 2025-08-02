#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,el,pos;
    cin>>n;
    int arr[n];
    cout<<"Enter no of elements to be inserted(0 to n) : ";
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter positon and element to be inserted : ";
    cin>>pos>>el;
    if(m==n)
    {
    	cout<<"array is full";
    }
    else
    {
    
    int ind = pos-1;
    for(int j = m-1;j>=ind;j--)
    {
        arr[j+1]=arr[j];
    }
    arr[ind]=el;
    m++;

    cout<<"After shifting : "<<endl;
    for(int i=0;i<m;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<m;
}
}

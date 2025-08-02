#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int *max = max_element(arr,arr+n);
	int frq[*max+1]={0};
	for(int i=0;i<n;i++)
	{
		frq[arr[i]]++;
	}
	int id,nax=0;
	for(int i=0;i<=*max;i++)
	{
		if (nax<frq[i])
		{
			nax=frq[i];
			id=i;
		}
	}
             cout<< "Customer id :"<<id<<" And its count :"<<nax<<endl;
}

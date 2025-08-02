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
	map<int,int>d;
	for(int i=0;i<n;i++)
	{
		d[arr[i]]++;
	}
	int id,maxi=0;
	for(auto it:d)
	{
		if (maxi<it.second)
		{
			maxi=it.second;
			id=it.first;
		}
	}
	cout<<"Customer id : "<<id<<" And its count : "<<maxi<<endl;
	
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,ele,pos;
	cout<<"Enter Size : ";
	cin>>n;
	int a[n];
	cout<<"Enter No Of Elements : ";
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	cout<<endl;
	cout<<" Elements Are : "<<endl;
	for(int i=0;i<m;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"Enter Elements to be deleted : ";
	cin>>ele;
	for(int i=0;i<m;i++)
	{
		if(a[i]==ele)
		{
			pos=i;
			break;
		}
	}
	if(pos>0)
	{
		for(int j =pos;j<m;j++)
		{
			a[j]=a[j+1];
		}
		m=m-1;
		cout<<"The array after deleting :"<<endl;
		for(int i=0;i<m;i++)
		{
			cout<<a[i]<<" ";
		}
	}
	else
	{
		cout<<"There is no such element in array to delete";
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n1,flg=1;
	cin>>n1;
	for(i=2;i<=(n1/2)+1;i++)
	{
		if (n1%i==0)
		{
			flg=0;
			cout<<"Not Prime Nmber"<<endl;
			break;
		}
	}
	if(flg)
	{
		cout<<"Prime Number"<<endl;
	}
	return 0;
}

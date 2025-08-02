#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,flg,j=2;;
	cin>>n;	
	while (j<n)
	{
	 	flg=0;
		for(i=2;i<j;i++)
		{
			if (j%i==0)
			{
				flg=1;
				break;
			}
			
		}
		if(!flg) //acts as for else block
		{
			cout<<j<<"  ";	
		}			      
		j++;	
	}
}

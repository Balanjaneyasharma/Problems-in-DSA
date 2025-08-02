#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n1,flg=1;
	cin>>n1;
	if(n1>2)  //if users enters neither 1 nor 2
        {
		
	for(i=2;i<=(int)sqrt(n1)+1;++i)
	{
		if (n1%i==0)
		{
			flg=0;
			cout<<"Not Prime Nmber"<<endl;
			break;
		}
	}
	if(flg)
	   cout<<"Prime Number"<<endl;
        }
             else if(n1==2)
             cout<<"Prime number"<<endl;
             else if(n1==1||n1==0)
             cout<<"neither prime nor composite"<<endl;
             else        //if user enters not an number
             cout<<"error"; 
	return 0;
}

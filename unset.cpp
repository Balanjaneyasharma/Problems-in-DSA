#include<iostream>
using namespace std;
int main()
{
	int n,p,res;
	cin>>n>>p;
	res=n^((p-1)<<1);
	cout<<res;
	return 0;
}

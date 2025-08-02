#include<iostream>
using namespace std;
int main()
{
	int n,p,res;
	cin>>n>>p;
	res = n|(1<<(p-1));
	cout<<res;
	return 0;
	
}

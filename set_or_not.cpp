#include<iostream>
using namespace std;
int main()
{
	int n,p;
	cin>>n>>p;
	if(n&(1<<(p-1)))
	  cout<<"YES";
	else
	  cout<<"NO";
}

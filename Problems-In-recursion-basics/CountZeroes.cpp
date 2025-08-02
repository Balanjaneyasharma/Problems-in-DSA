#include<bits/stdc++.h>
using namespace std;
int countzeroes(int n){
  if(n==0){
    return 0;
  }
  int smallAns=countzeroes(n/10);
  int last_digit=n%10;
  if(last_digit==0){
    return smallAns+1;
  }
  else{
    return smallans;
  }
}
int main()
{
  int n;
  cin>>n;
  cout<<countzeroes(n)<<endl;
  return 0;
}

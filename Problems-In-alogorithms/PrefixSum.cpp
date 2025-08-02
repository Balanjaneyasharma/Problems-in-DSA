#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int prefix[n];
  prefix[0]=arr[0];
  for(int i=1;i<n;i++){
    prefix[i]=prefix[i-1]+arr[i];
  }
  int Q;
  while(Q--){
    int l,r;
    cin>>l>>r;
    if(l==0) cout<<prefix[r]<<"\n";
    else cout<<prefix[r]-prefix[l-1]<<"\n";
  }
  return 0;
}

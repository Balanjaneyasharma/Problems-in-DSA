#include<bits/stdc++.h>
using namespace std;
int N =1000001;
int sieve[1000001];
void gen_sieve()
{
  sieve[0]=sieve[1]=0;
  for(int i=2;i<N;i++) // Marking ebery one first prime
  {
    sieve[i]=1;
  }
  for(int i=2;i*i<N;i++)// traversing up to square root of N;
  {
    if(sieve[i]==1)
    {
      for(int j=i*i;j<N;j+=i)// for every prime mark its multiples non prime
      {
        sieve[j]=0;
      }
    }
  }
}
vector<int> gen_Primes(int num)
{
  //gen_seive();
  vector<int>ds;
  for(int i=2;i<=num;i++){
    if(sieve[i]==1) ds.push_back(i);// achieved using sieve array ;
  }
  return ds;
}
int main()
{
  gen_sieve();
  int T;
  cin>>T;
  while(T--){
    int l,r;
    cin>>l>>r;
    vector<int>dj=gen_Primes(sqrt(r)+1);// required prime numbers up to sqrt0f R;
    vector<int>dummy(r-l+1,1);// Intially all are prime
    
    for(auto it: dj)
    {
      int firstmul=(l/it)*it<l ? ((l/it)+1)*it:(l/it)*it;// finding first multiple of each prime number in given range
      for(int j=max(firstmul,it*it);j<=r;j+=it)
      {
        dummy[j-l]=0; //marking them non-prime
      }
    }
    for(int i=0;i<r-l+1;i++)
    {
        if(dummy[i]==1) cout<<l+i<<" ";// print inhg only primes..!
    }
  }
  return 0;
}

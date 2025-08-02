#include <bits/stdc++.h>
using namespace std;
long int N=10000001;
vector<int>primes(N,1);
vector<int>prefix(N);
void gen_seive(){
	primes[0]=primes[1]=0;
	for(int i=2;i*i<=N;i++){
		if(primes[i]==1){
			for(int j=i*i;j<=N;j+=i){
				primes[j]=0;
			}
		}
	}
	prefix[0]=primes[0];
	for(int i=1;i<N;i++){
		prefix[i]=prefix[i-1]+primes[i];
	}
}
int main() {
	gen_seive();
	long long t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;

		cout<<prefix[n]<<"\n";
	}
}

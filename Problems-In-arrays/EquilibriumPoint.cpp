#include<iostream>
using namespace std;
int equilibriumPoint(long long a[], int n) {
        if(n==1){
            return 1;
        }
        long long prefix[n];
        prefix[0]=a[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+a[i];
        }
        for(int i=1;i<n-1;i++){
            if((prefix[i-1])==(prefix[n-1]-prefix[i])){
                return i+1;
            }
        }
        return -1;
        }
int main(){
        int n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
                cin>>a[i];
        }
        cout<<equilinriumPoint(a,n)<<"\n";
        return 0;
}
        

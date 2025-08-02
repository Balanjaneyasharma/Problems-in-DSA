#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int arrangeCoins(int n) {
        long long int l=1,r=n;
        long long int mid,cur;
        while(l<=r){
            mid=l+(r-l)/2;
            cur=mid*(mid+1)/2;
            if(cur==n){
                return (int)mid;
            }
            else if(cur<n){
                l=mid+1;
            }
            else r=mid-1;
        }
        return (int)r;
        
    }
};
int main()
{
  int n;
  cin>>n;
  cout<<arrangeCoins(n)<<endl;
  return 0;
}

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=*max_element(piles.begin(),piles.end());
        while(l<=r){
            int mid=l +(r-l)/2;
            int res=0;
            for(auto it: piles){
                res=res+it/mid;
                if(it%mid!=0) res+=1;
            }
            if(res<=h){
                r=mid-1;
            }
            else l=mid+1;
            
        }
        return l;
    }
};
int main()
{
  vector<int>vec;
  int n;
  int h;
  cin>>n>>h;
  while(n--){
    int el;
    cin>>el;
    vec.push_back(el);
  }
  cout<<minEatingSpeed(vec,h);
  return 0;
}
  
  

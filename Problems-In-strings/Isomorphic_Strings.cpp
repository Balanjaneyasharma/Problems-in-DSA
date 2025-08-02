#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size();
        map<char,char>mpp;
        set<char>mset;
        for(int i=0;i<n;i++){
            if(mpp.count(s[i])==0 && mset.count(t[i])==0){
                mpp[s[i]]=t[i];
                mset.insert(t[i]);
            }
            else if(mpp.count(s[i])==0 && mset.count(t[i])!=0){
                return false;
            }
            else if(mpp[s[i]]!=t[i]){
                return false;
            }
        }
        return true;
    }
};
int main()
{
  string s,t;
  cin>>s>>t;
  cout<<isIsomorphic(s,t);
  return 0;
}

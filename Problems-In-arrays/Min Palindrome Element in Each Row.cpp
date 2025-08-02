#include <bits/stdc++.h>

using namespace std;
bool isPalin(int n){
    if(n<10) return true;
   int temp=n;
   int rev=0;
   int rem;
   while(temp>0){
       rem=temp%10;
       rev=rev*10+rem;
       temp=temp/10;
   }
   if(rev==n) return true;
   else
   return false;
}

int main()
{
    int n;
    cin>>n;
    int  mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    vector<int>ans;
    int mini=10000000;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(isPalin(mat[i][j]))
            {
                mini=min(mini,mat[i][j]);
            }
        }
        ans.push_back(mini);
        mini=10000000;
    }
    for(auto it: ans){
        cout<<it<<endl;
    }

    return 0;
}

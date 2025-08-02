#include<bits/stdc++.h>
using namespace std;
int N=3;
void printsubsets(int ind,vector<int>&ds,int a[])
{
    if(ind==N)
    {
        for(auto it:ds)
        {
            cout<<it<<" ";
        }
        cout<<"\n";
        return;
    }
    ds.push_back(a[ind]);
    printsubsets(ind+1,ds,a);
    ds.pop_back();
    printsubsets(ind+1,ds,a);
}
int main()
{
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
    vector<int>ds;
    printsubsets(0,ds,a);
    return 0;
}

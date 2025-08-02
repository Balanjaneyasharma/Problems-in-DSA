#include <bits/stdc++.h>
using namespace std;
/*
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY ar
 */
 int sockMerchant(int n, vector<int> ar) {
    sort(ar.begin(),ar.end());
    stack<int>st;
    int count=0;
    for(int i = 0;i<n;i++)
    {
        if(st.empty())
        {
            st.push(ar[i]);
        }
        else if(st.top()==ar[i])
        {
            count++;
            st.pop();
        }
        else{
            st.push(ar[i]);
        }
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    vector<int>socks;
    for(int i=0;i<n;i++)
    {
        cin>>socks[i];
    }
    cout<<sockMerchant(n,socks);
    return 0;
}


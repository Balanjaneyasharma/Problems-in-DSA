#include <iostream>
#include<bits/stdc++.h>
using namespace std;int BFS(int start,int end,int n, int a[])
{​​
//step 1 always have a queue
queue<pair<int,int>>Q;
//step 2 put the start point
Q.push({​​start,0}​​);
// step 3 creat an vesiting array that helps you to find wether you already reached that point or not
int vis[100000];
vis[start]=1;//you all ready at that point so make it as one
//step 4
// try untill ur queue becomes empty
while(!Q.empty())
{​​
auto it=Q.front();//{​​2,0}​​
int newstart=it.first;//2
int steps=it.second;//steps
Q.pop();
for(int i=0;i<n;i++)
{​​
int res=(newstart*a[i])%100000;
if(res==end)
{​​
return steps+1;
}​​
if(!vis[res])
{​​
Q.push({​​res,steps+1}​​);
vis[res]=1;
}​​
}​​
}​​
}​​
int main() {​​
int start,end;
cin>>start>>end;
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{​​
cin>>a[i];
}​​
int c=BFS(start,end,n,a);
cout<<c;
return 0;
}​​

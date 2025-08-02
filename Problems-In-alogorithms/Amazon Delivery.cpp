#include<bits/stdc++.h>
using namespace std;
bool isValid(int i,int j,int matrix[][3])
{
	if(i>=0 && i<3 && j>0 && j<3 && matrix[i][j]!=0)
	{
		return true;
	}
	return false;
}

void amazon_sde()
{
	int matrix[3][3]={{1,0,0},{1,1,0},{1,9,0}};
	int m=3,n=3;
	queue<pair<pair<int,int>,int>>Q;
	if(matrix[0][0]==0)
	{
		cout<<-1;
		return;
	}
	else if(matrix[0][0]==9)
	{
		cout<<0;
		return;
	}
	Q.push({{0,0},0});
	int vis[m][n];
	memset(vis,0,sizeof vis);
	vis[0][0]=1;
	int di[]={-1,0,1,0};
	int dj[]={0,1,0,-1};
	while(!Q.empty())
	{
		auto it=Q.front();
		int i=it.first.first;
		int j=it.second.second;
		int steps=it.second;
		Q.pop();
		for(int k=0;k<4;k++)
		{
			int newi=i+di[k];
			int newj=j+dj[k];
			if(isValid(newi,newj,matrix) && !vis[newi][newj])
			{
				if(matrix[newi][newj]==9)
				{
					cout<<steps+1;
					return;
				}
				vis[newi][newj]=1;
				Q.push({{newi,newj},steps+1}) ;
			}
		}
	}
	cout<<-1;
}

int main()
{
	amazon_sde();
	return 0;
}

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
int arr[5]={10,20,30,50,60};//first method
//arr.fill(10);
/*
for(int i=0;i<5;i++)
{
cout<<arr[i]<<" ";
}
cout<<"\n";
array<int,5>a;// second way
//a.fill(10);
for(int i=0;i<5;i++)
{
a[i]=i;
}
for(int i=0;i<5;i++)
{
cout<<a[i]<<" ";
}
//begin(), end(), rbegin(),rend()
for(auto it=a.begin();it!=a.end();it++)
{
cout<<*it<<" ";
}
cout<<"\n";
for(auto it=a.rbegin();it!=a.rend();it++)
{
cout<<*it<<" ";
}
for(auto it:a)
{
cout<<it<<" ";
}*/
vector<int>ve;//{}-->0
ve.push_back(10);//{10}-->1
ve.push_back(20);//{10,20}-->2
ve.push_back(30);//{10,20,30}-->3
ve.push_back(50);//{10,20,30,50}
vector<int>don(4,10);
vector<int>ve1(ve.begin(),ve.end()-2);//
for(auto it:ve1)
{
cout<<it<<" ";
}
cout<<"\n";
//dicelaration;
vector<vector<int>>matrix;
vector<vector<int>>mat(4,vector<int>(4,10));
for(int i=0;i<4;i++)
{
for(int j=0;j<4;j++)
{
cout<<mat[i][j]<<" ";
}
cout<<"\n";
}
//string s(4,'A');

vector<vector<char>>st(4,vector<char>(4,'.'));
for(int i=0;i<4;i++)
{
for(int j=0;j<4;j++)
{
cout<<st[i][j]<<" ";
}
cout<<"\n";
}
vector<int>arr[4];
int arr[4];
return 0;
}

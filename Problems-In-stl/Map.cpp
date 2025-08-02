#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
//map is used to store data in a form of pair one is key and other is value
map<string,int>mpp;//map<key type, value type>mpp
mpp["Ashok"]=90;
mpp["Don"]=100;
mpp["Raj"]=102;
mpp.emplace("Sudhir",67);
//map will be arranged in key sorted order and it has unique keys
//how to trace the map
//log(N)
auto it=mpp.find("Ashok");it!=mpp.end()
for(auto it:mpp)
{
cout<<it.first<<" "<<it.second<<" ";
}
cout<<"\n";
for(auto it=mpp.begin(); it!=mpp.end();it++)
{
cout<<it->first<<" "<<it->second<<" ";
}
cout<<"\n";
//unordered map
//unordered map will not have any order but it has unique keys
unordered_map<int,int>umpp;
//it has all most all functions like map
//time complexity is O(1)-->constent time
//worst case it is O(N)-->linear time

//multi map
multimap<int,int>mmpp;
mmpp.emplace(1,3);
mmpp.emplace(1,2);
mmpp.emplace(2,4);
mmpp.emplace(1,4);

for(auto it:mmpp)
{
cout<<it.first<<" "<<it.second<<" ";
}
//pair class
pair<int,int>pr={1,2};
cout<<pr.first<<"\n";//prints 1
cout<<pr.second<<"\n";//prints 2
pair<pair<int,int>,int>>ppr={{1,2},3};
cout<<ppr.first.first<<"\n"; // prints 1
cout<<ppr.first.second<<"\n";// prints 2
cout<<ppr.second<<"\n";// prints 3
pair<pair<int,int>,pair<int,int>>pr2={{1,2},{3,4}};
cout<<pr2.second.second<<"\n";//prints 4

vector<pair<int,int>>ve;//{{},{},{},{}}
set<pair<int,int>>se;

//stack and Queue
//stack LIFO-->last in first out ds
//top, push, pop, empty, size
stack<int>st;
st.push(1);
st.push(3);
st.push(4);
st.push(2);
cout<<st.top()<<"\n"; //prints 2
st.pop();
cout<<st.top()<<"\n";//prints 4
stack<int>st1;
cout<<st1.top();//-->throws an error
while(!st.empty())
{
st.pop();
}//it removes all the elements
cout<<st.size();


//Queue FIFO -->first in first out ds
//front , push, pop, empty, size
Queue<int>Q;
Q.push(1);
Q.push(3);
Q.puhs(4);
cout<<Q.front()<<"\n"; //prints 1
Q.pop();// delets 1
while(!Q.empty())
{
Q.pop();
}
return 0;
}


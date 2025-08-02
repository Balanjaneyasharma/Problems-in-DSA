#include <iostream>
using namespace std;
int gcd(int x,int y){
    if(x==0) return y;
    if(y==0) return x;
    if(x<y) return gcd(x,y%x);
    else return gcd(x%y,y);
}
int lcm(int x,int y){
    return x*y/gcd(x,y);
}

int main()
{
    int x,y;
    cin>>x>>y;
    if(gcd(x,y)==1){
        cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;
    return 0;
}

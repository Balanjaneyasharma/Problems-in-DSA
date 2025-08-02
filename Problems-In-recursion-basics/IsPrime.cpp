#include<iostream>
using namespace std;
bool isPrime(int n,int i=2)
{
  if(n<=2)
  {
     if(n==2)
     {
        return true;
     }
     else
     {
         return false;
     } 
  }
  if(n%i==0)
  {
    return false;
  }
  if(i*i>n)
  {
     return true;
  }
  return isPrime(n,i+1);
}
int main()
{
int  n;
cin>>n;
cout<<isPrime(n,2);
}

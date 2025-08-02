#include<bits/stdc++.h>
using namespace std;
int addDigits(int num) {
        int n1=num;
        int sum=0,rem;
        while(true){
            rem=n1%10;
            sum+=rem;
            n1=n1/10;
            if(n1==0){
                if(sum>=10){
                    n1=sum;
                    sum=0;
                }
                else{
                    break;
                }
            }
        }
        return sum;
 int main(){
   int n;
   cin>>n;
   cout<<addDigits(n)<<"\n";
   return 0;
 }

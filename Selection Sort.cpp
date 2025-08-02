#include <iostream>
#include<array>
using namespace std;
void selectionsort(int a[],int n)
{
    int min;
    for(int i=0;i<n;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if (a[j]<a[min])
            {
                min=j;//to get index of least element in array ; 
                
            }
        }
        swap(a[i],a[min]);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    selectionsort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
     return 0;
}

class Solution {
public:
    //Leetcode
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0,h=arr.size()-1;
        while(l<=h){
            int mid = l+(h-l)/2;
            if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1])  return mid;
            else if(arr[mid]<arr[mid+1]) l=mid+1;
            else h=mid-1;
        }
        return l;  
    }
    //GeekForGeeks
    int peakElement(int arr[], int n)
    {
       // Your code here
       int l =0,r=n-1;
       while(l<r){
           int mid = l+(r-l)/2;
            if (arr[mid]>arr[mid+1]) r = mid;
           else l= mid+1;
       }
       return l;
    }
};
};

class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    int e=n-1;
	    int l=0,r=e;
	    while(l<=r){
	        int mid=l+(r-l)/2;
	        int prev=(mid-1)%n;
	        int next = (mid-1+n)%n;
	        if(arr[mid]<=arr[prev]&&arr[mid]<arr[next]) return mid;
	        else if (arr[mid]<arr[e]) r=mid-1;
	        else l=mid+1;
	    }
	    return 0;
	}

};

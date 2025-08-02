class Solution
{
	public:
	int gcd(int x,int y){
	    if(x==0) return y;
	    if(y==0) return x;
	    if(x<y) return gcd(x,y%x);
	    return gcd(x%y,y);
	}
    int gcd(int N, int arr[])
    {
        //int size = sizeof(arr)/sizeof(arr[0]);
    	//if(size==1) return arr[0];
    	int result=arr[0];
    	for(int i=1;i<N;i++){
    	    result=gcd(result,arr[i]);
    	}
    	return result;
    }
};
